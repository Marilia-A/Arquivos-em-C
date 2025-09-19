#include<stdio.h>
#include<locale.h>

int fatorial(int n) {
    if (n < 0){
     return -1;	
	} 
    if (n == 0 || n == 1){
     return 1;
	} 
    return n * fatorial(n - 1);
}

int main() 
{
	setlocale(LC_ALL, "");
    int n, resultado;
    printf("Digite um número inteiro positivo-> ");
    scanf("%d", &n);
    resultado = fatorial(n);
    if (resultado == -1) {
        printf("Erro: O fatorial não está definido para números negativos.\n");
    } else {
        printf("Fatorial de %d é %d.\n", n, resultado);
    }
    return 0;
}