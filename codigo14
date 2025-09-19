#include <stdio.h>
#include <locale.h>

int div(int a,int b,int *quoc,int *resto) {
    if(b==0) return -1;
    *quoc=a/b;
    *resto=a%b;
    return 0;
}

int main() {
    int a,b,quoc,resto,resultado;
    printf("Digite o valor de a-> ");
    scanf("%d",&a);
    printf("Digite o valor de b-> ");
    scanf("%d",&b);
    resultado=div(a,b,&quoc,&resto);
    if(resultado==-1) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } 
	else {
        printf("Quociente: %d, Resto: %d\n",quoc,resto);
    }
    return 0;
}