#include <stdio.h>
#include<locale.h>
void trocar(int *a, int *b){  //como é aepnas troca, isso é procedimento, não?
	int temp;
    temp=*a;
    *a=*b;     
    *b=temp;    
}
int main() 
{
	setlocale(LC_ALL, "");
    int n1, n2;

    printf("Digite o primeiro número-> ");
    scanf("%d", &n1);
    printf("Digite o segundo número-> ");
    scanf("%d", &n2);
    printf("Antes da troca: n1 = %d, n2 = %d\n",n1, n2);
    trocar(&n1, &n2);
    printf("Após a troca: n1 = %d, n2 = %d\n", n1, n2);
    getch();
    return 0;
}