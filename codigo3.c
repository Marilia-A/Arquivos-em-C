#include<stdio.h>
#include<locale.h>
//black ia
int MIN(int matriz[4][4]){
	int maior, i, j;
	int linhaMaior, minimax;
    maior=matriz[0][0],linhaMaior=0;
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(matriz[i][j]>maior) {
                maior=matriz[i][j];
                linhaMaior=i;
            }
        }
    }
    minimax=matriz[linhaMaior][0];
    for(j=0;j<4;j++) {
        if(matriz[linhaMaior][j]<minimax) {
            minimax=matriz[linhaMaior][j];
        }
    }
    return minimax;
}

int main() 
{
	setlocale(LC_ALL, "");
	int i, j, minimax;
    int matriz[4][4];
    printf("Digite os elementos da matriz 4x4:\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    minimax=MIN(matriz);
    printf("O elemento minimax da matriz é: %d\n",minimax);
    return 0;
}