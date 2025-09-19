#include<stdio.h>
#include<locale.h>
int Letra(char c){
    // Verifica se o caractere está no intervalo das letras maiúsculas (A-Z) ou minúsculas (a-z)
    if((c>='A' && c<='Z') || (c>='a' && c<='z')){
     return 1; // É uma letra
    } 
	else{
     return 0; // Não é uma letra
    }
}

int main() {
	setlocale(LC_ALL, "");
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);
    if(Letra(c)) {
     printf("'%c' é uma letra do alfabeto.\n", c);
    } 
	else{
     printf("'%c' NÃO é uma letra do alfabeto.\n", c);
    }
    getch();
    return 0;
}

