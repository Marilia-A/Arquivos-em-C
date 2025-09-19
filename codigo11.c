#include<stdio.h>
#include<locale.h>

int maior(int a, int b) {
    if(a>b){
     return a; 
    } 
	else{
     return b; 
    }
}

int main() 
{ 
	setlocale(LC_ALL, "");
    int n1, n2;
    int resultado;
    printf("Digite o primeiro número-> ");
    scanf("%d", &n1);
    printf("Digite o segundo número-> ");
    scanf("%d", &n2);
    resultado=maior(n1,n2);
    printf("O maior entre %d e %d é %d.\n", n1, n2, resultado);
    getch();
    return 0;
}