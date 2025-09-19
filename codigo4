#include <stdio.h>
#include <locale.h>
int Bissexto(int ano){
    if((ano%4==0 && ano%100!=0) || (ano%400==0)){
        return 1;
    } 
	else{
        return 0;
    }
}
int main() {
    setlocale(LC_ALL, "");
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if(Bissexto(ano)){
        printf("%d é um ano bissexto.\n", ano);
    } 
	else{
        printf("%d não é um ano bissexto.\n", ano);
    }
    getch();
    return 0;
}