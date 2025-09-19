#include <stdio.h>
#include <locale.h>

void DiaSemana(int n){
    switch(n){
        case 1:
            printf("DOM\n");
            break;
        case 2:
            printf("SEG\n");
            break;
        case 3:
            printf("TER\n");
            break;
        case 4:
            printf("QUA\n");
            break;
        case 5:
            printf("QUI\n");
            break;
        case 6:
            printf("SEX\n");
            break;
        case 7:
            printf("SAB\n");
            break;
        default:
            printf("Erro: número inválido! Digite um valor entre 1 e 7.\n");
            break;
    }
}
int main() 
{
    setlocale(LC_ALL, "");
    int n;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &n);
    DiaSemana(n);
    getch();
    return 0;
}