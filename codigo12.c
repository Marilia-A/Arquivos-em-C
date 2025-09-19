#include<stdio.h>
#include<locale.h>

int div(int x, int y){
	int conta=0;
    if(y==0 || x==0){
     return -1; 
    }
    
    while (x%y==0 && x!=0){
     x=x/y;
     conta++;
    }
    return conta;
}

int main()
{
	setlocale(LC_ALL, "");
	int x, y;
	int resultado;
	printf("\n Digite um valor para x--> ");
	scanf("%d", &x);
	printf("\n Digite um valor para y--> ");
	scanf("%d", &y);
	resultado=div(x,y);

    if(resultado==-1){
      printf("\nDivisão por zero, digite um valor inteiro.");
    } 
	else{
      printf("\n %d é divisível por %d, %d vez(es).", x, y, resultado);
    }
    getch();
}