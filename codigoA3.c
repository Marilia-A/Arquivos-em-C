#include<stdio.h>
#include<locale.h>

double PC(double pol) {
    return pol * 2.54;
}

int main() {
	setlocale(LC_ALL, "");
    double polegadas,centimetros;
    printf("Digite o valor em polegadas-> ");
    scanf("%lf",&polegadas);
    centimetros = PC(polegadas);
    printf("%.2lf polegadas é igual a %.2lf centímetros.\n",polegadas,centimetros);
    getch();
    return 0;
}