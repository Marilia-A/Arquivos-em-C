#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "cJSON.h"
#define MAX_CLIENTES 100
#define ARQUIVO_CLIENTES "clientes.json"

typedef struct {
    int codigo;
    char nome[100];
    char endereco[200];
    char cpf[15];
    char telefone[15];
    char email[100];
}Cliente;

Cliente clientes[MAX_CLIENTES];
int total_clientes=0;
int i;

void listar_clientes(){
    printf("Clientes Cadastrados: \n\n");
    if(total_clientes==0){
        printf("Nenhum cliente cadastrado.\n\n");
    }
	else{
       for(i=0;i<total_clientes;i++) {
         printf("Código: %d, Nome: %s, CPF: %s\n", clientes[i].codigo, clientes[i].nome, clientes[i].cpf);
        }
     getch();
     system("cls");
     printf("\n");
    }
}

void cadastrar_cliente(){
    if(total_clientes>=MAX_CLIENTES){
     printf("Limite de clientes atingido.\n\n");
     return;
    }

    Cliente novo_cliente;
    printf("Digite o código: ");
    scanf("%d", &novo_cliente.codigo);
    getchar();  // Limpar o buffer após a leitura do código
    
    printf("Digite o Nome: ");
    fgets(novo_cliente.nome, sizeof(novo_cliente.nome), stdin);
    novo_cliente.nome[strcspn(novo_cliente.nome, "\n")]=0;

    printf("Digite o Endereço: ");
    fgets(novo_cliente.endereco, sizeof(novo_cliente.endereco), stdin);
    novo_cliente.endereco[strcspn(novo_cliente.endereco, "\n")]=0;

    printf("Digite o CPF: ");
    fgets(novo_cliente.cpf, sizeof(novo_cliente.cpf), stdin);
    novo_cliente.cpf[strcspn(novo_cliente.cpf, "\n")]=0;

    printf("Digite o Telefone: ");
    fgets(novo_cliente.telefone, sizeof(novo_cliente.telefone), stdin);
    novo_cliente.telefone[strcspn(novo_cliente.telefone, "\n")]=0;

    printf("Digite o E-mail: ");
    fgets(novo_cliente.email, sizeof(novo_cliente.email), stdin);
    novo_cliente.email[strcspn(novo_cliente.email, "\n")]=0;

    clientes[total_clientes++]=novo_cliente;
    printf("Cliente cadastrado com sucesso!\n\n");
    getch();
    system("cls");
}

void salvar_clientes(){
	//Cria um array JSON para guardar os clientes
    cJSON *json_array = cJSON_CreateArray();
    for(i=0;i<total_clientes;i++){
    	//Cria um objeto JSON para cada um dos clientes cadastrados
        cJSON *json_cliente = cJSON_CreateObject();
        //Adiciona os campos do cliente ao JSON
        cJSON_AddNumberToObject(json_cliente, "codigo", clientes[i].codigo);
        cJSON_AddStringToObject(json_cliente, "nome", clientes[i].nome);
        cJSON_AddStringToObject(json_cliente, "endereco", clientes[i].endereco);
        cJSON_AddStringToObject(json_cliente, "cpf", clientes[i].cpf);
        cJSON_AddStringToObject(json_cliente, "telefone", clientes[i].telefone);
        cJSON_AddStringToObject(json_cliente, "email", clientes[i].email);
        cJSON_AddItemToArray(json_array, json_cliente);
    }
    //Abre o arquivo para escrita
    FILE *file = fopen(ARQUIVO_CLIENTES, "w");
    if(file){
    	//converte o array para string
        char *json_string=cJSON_Print(json_array);
        fprintf(file, "%s", json_string);
        fclose(file);
        free(json_string);
        printf("Clientes salvos em %s\n\n", ARQUIVO_CLIENTES);
    }
	else{
        printf("Erro ao abrir o arquivo para salvar.\n\n");
    }
    cJSON_Delete(json_array);
}

void carregar_clientes(){
	//abre o arquivo para leitura
    FILE *file = fopen(ARQUIVO_CLIENTES, "r");
    if(file){
    	//olha o tamanho do arquivo
        fseek(file, 0, SEEK_END);
        long tamanho = ftell(file);
        fseek(file, 0, SEEK_SET);

        if(tamanho>0){
            char *json_string = (char *)malloc(tamanho + 1);
            fread(json_string, 1, tamanho, file);
            json_string[tamanho] = '\0';

            cJSON *json_array = cJSON_Parse(json_string);
            if(json_array){
            	//observa o número de clientes no array
                total_clientes = cJSON_GetArraySize(json_array);
                for (i=0;i<total_clientes;i++){
                    cJSON *json_cliente = cJSON_GetArrayItem(json_array, i);
                    clientes[i].codigo = cJSON_GetObjectItem(json_cliente, "codigo")->valueint;
                    strcpy(clientes[i].nome, cJSON_GetObjectItem(json_cliente, "nome")->valuestring);
                    strcpy(clientes[i].endereco, cJSON_GetObjectItem(json_cliente, "endereco")->valuestring);
                    strcpy(clientes[i].cpf, cJSON_GetObjectItem(json_cliente, "cpf")->valuestring);
                    strcpy(clientes[i].telefone, cJSON_GetObjectItem(json_cliente, "telefone")->valuestring);
                    strcpy(clientes[i].email, cJSON_GetObjectItem(json_cliente, "email")->valuestring);
                }
                printf("Clientes carregados de %s\n\n", ARQUIVO_CLIENTES);
            }
            free(json_string);
        }
        fclose(file);
    }
}

void limpar_arquivo(){
	//Abre o arquivo para escrita, para então limpar
    FILE *file = fopen(ARQUIVO_CLIENTES, "w");
    if(file){
        fclose(file);
        printf("Arquivo %s limpo com sucesso.\n\n", ARQUIVO_CLIENTES);
    } 
	else{
        printf("Erro ao abrir o arquivo para limpar.\n\n");
    }
}

int main(){
    setlocale(LC_ALL, "");
    carregar_clientes();

    int opc;
    do{
    	printf("\n**************************************************\n");
        printf("*                                                *\n");
        printf("*       Algoritmo para Cadastro de Clientes      *\n");
        printf("*                                                *\n");
        printf("**************************************************\n\n");

        printf("1. Listar Clientes \n");
        printf("2. Cadastrar Novo Cliente \n");
        printf("3. Salvar Clientes \n");
        printf("4. Sair \n");
        printf("5. Limpar Arquivo \n");  
        printf("\nEscolha uma opção:");
        scanf("%d", &opc);
        getchar();  // Limpar o buffer após a leitura da opção

        switch(opc){
            case 1:
                listar_clientes();
                getch();
                system("cls"); //limpar tela
                break;
            case 2:
                cadastrar_cliente();
                getch();
                system("cls");
                break;
            case 3:
                salvar_clientes();
                getch();
                system("cls");
                break;
            case 4:
                printf("Saindo do programa...\n\n");
                return 0;
                break;
            case 5:
                limpar_arquivo();
                break;
            default:
                printf("Opção Inválida. Escolha uma opção existente. \n");
                getch();
                system("cls");
        }
    }while(opc!=5);
    getch();
    system("cls");
    return 0;
}