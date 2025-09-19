#include <stdio.h>
#include<locale.h>

long long fatorial(int n){
	int i;
    if(n<0){
     return -1; 
    }
    long long resultado=1; 
    for(i=1;i<=n;i++) {
     resultado*=i; // Multiplica o resultado pelo número atual
    }
    return resultado;
}

int main() 
{
	setlocale(LC_ALL, "");
    int n;
    long long resultado;  //long long(fatorial) se lê com lld
    printf("Digite um número-> ");
    scanf("%d", &n);
    resultado=fatorial(n);
    if(resultado==-1){
     printf("Fatorial não definido para números negativos.\n");
    } 
	else{
     printf("O fatorial de %d é %lld.\n", n, resultado);
    }
    return 0;
}