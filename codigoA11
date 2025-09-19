#include <stdio.h>
#include <locale.h>

void adicao() {  //void n retorna valor, apenas exibe na tela
    double a, b;
    printf("Digite dois números para adição: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a + b);
    getch();
    system("cls");
}

void subtracao() {
    double a, b;
    printf("Digite dois números para subtração: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a - b);
    getch();
    system("cls");
}

void multiplicacao() {
    double a, b;
    printf("Digite dois números para multiplicação: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a * b);
    getch();
    system("cls");
}

void divisao() {
    double a, b;
    printf("Digite dois números para divisão: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Resultado: %.2lf\n", a / b);
    } 
	else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
    getch();
    system("cls");
}

int main() {
	setlocale(LC_ALL, "");
    int opc;
    do {
        printf("**********************************************************************\n");
        printf("                         Calculadora Simples.\n\n");
        printf("Opções possíveis:\n");
        printf(" 1. Adição\n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n 5. Sair do programa\n");
        printf("*********************************************************************\n");
        printf("Entre com sua opção->  ");
        scanf("%d", &opc);
        switch (opc) {
            case 1: 
			 adicao();  
			 break;
            case 2:  
			 subtracao(); 
			 break;
            case 3: 
			 multiplicacao(); 
			 break;
            case 4: 
			 divisao(); 
			 break;
            case 5: 
			 printf("Saindo do programa...\n"); 
			 getch();
			 break;
            default: 
			 printf("Opcao invalida! Tente novamente.\n");
			 getch();
             system("cls");
        }
    } while (opc!=5);
    return 0;
}