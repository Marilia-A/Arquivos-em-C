#include <stdio.h>
#include <locale.h>
int Primo(int n, int i){
    if(n<=1){
     return 0;
    }
    for(i=2;i*i<=n; i++){
     if(n%i==0){
       return 0;
     }
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "");

    int n;
    int Primo(n);
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(Primo){
     printf("%d é um número primo.\n", n);
    } 
	else{
     printf("%d não é um número primo.\n", n);
    }

    return 0;
}
