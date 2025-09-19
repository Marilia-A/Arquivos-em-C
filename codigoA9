#include<stdio.h>
#include<locale.h>
#define MAX 10
void ordenarVetor(int vetor[MAX], int tamanho) {  //aquilo de passar bolha
	int i, j;
	int temp;
    for (i=0;i<tamanho-1;i++){
        for (j=0;j<tamanho-i-1;j++){
            if (vetor[j]>vetor[j+1]){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }
    }
}

int main() 
{
	setlocale(LC_ALL, "");
    int vetor[MAX];
    int i;
    printf("Digite 10 números inteiros:\n");
    for (i=0;i<MAX;i++) {   //um pra ler
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    ordenarVetor(vetor, MAX);
    printf("Vetor ordenado:\n");
    for (i=0;i<MAX;i++) {  //outro pra mostrar
        printf("%d ", vetor[i]);
    }
    printf("\n");
    getch();
    return 0;
}