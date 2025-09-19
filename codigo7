#include<stdio.h>
#include<locale.h>
int Div(int x, int y){  //retorna resultado, diferente de void
    if(y==0){
     return 0; 
    }
    if(x%y==0){
     return 1; 
    } 
	else{
     return 0; 
    }
}

int main()
{
	setlocale(LC_ALL, "");
    int x, y;

    printf("Digite o primeiro número (x)-->  ");
    scanf("%d", &x);
    printf("Digite o segundo número (y)-->  ");
    scanf("%d", &y);
    if(Div(x, y)){
     printf("%d é divisível por %d.\n", x, y);
    } 
	else{
     printf("%d NÃO é divisível por %d.\n", x, y);
    }
    getch();
	return 0;  
}
