#include <stdio.h>
#include<locale.h>
int Capicua(int n){
    int original=n;
    int rev=0; 
	int dig;      

    while(n>0){
     dig=n%10; // Obtém o último dígito
     rev=rev*10+dig; // Adiciona o dígito ao reverso
     n/=10; // Remove o último dígito do número
    }

    if(original==rev){
     return 1; // O número é capicua
    } 
	else{
     return 0; // O número não é capicua
    }
}

int main() 
{
	setlocale(LC_ALL, "");
    int n;
    
    printf("Digite um número-> ");
    scanf("%d", &n);
    if(Capicua(n)){
     printf("O número %d é capicua.\n", n);
    } 
	else{
     printf("O número %d não é capicua.\n", n);
    }
    getch();
    return 0;
}