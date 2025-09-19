#include<stdio.h>
#include<locale.h>

float M(int vetor[],int tamanho) {
    int soma=0;
    int i;
    for(i=0;i<tamanho;i++) {
        soma+=vetor[i];
    }
    return (float)soma/tamanho;
}

int main() {
	setlocale(LC_ALL, "");
	int i;
    int vetor[10];
    float media;
    printf("Digite 10 números inteiros\n");
    for(i=0;i<10;i++) {
        printf("Número %d-> ",i+1);
        scanf("%d",&vetor[i]);
    }
    media=M(vetor,10);
    printf("A média aritmética dos elementos do vetor é: %.2f\n",media);
    getch();
    return 0;
}