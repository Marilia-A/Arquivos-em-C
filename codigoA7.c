#include<stdio.h>
#include<locale.h>
//black ia 23 e 24
int SOMAS(int matriz[][10],int tamanho) {  //soma diagonal secundaria
    int soma=0;
    int i;
    for(i=0;i<tamanho;i++) {
     soma+=matriz[i][tamanho-i-1];
    }
    return soma;
}

int main() 
{
	setlocale(LC_ALL, "");
    int matriz[10][10],tamanho;
    int i, j, soma;
    printf("Digite o tamanho da matriz quadrada (max 10)-> ");
    scanf("%d",&tamanho);
    printf("Digite os elementos da matriz\n");
    for(i=0;i<tamanho;i++) {
        for(j=0;j<tamanho;j++) {
            printf("Elemento [%d][%d]-> ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    soma=SOMAS(matriz,tamanho);
    printf("Soma da diagonal secundária: %d\n",soma);
    return 0;
}