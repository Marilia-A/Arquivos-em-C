#include<stdio.h>
#include<locale.h>
#include <math.h>

double Rad(double graus){
    return graus*(M_PI/180.0); //rad é igual a Graus vezes Pi dividido por 180
}

int main() 
{
	setlocale(LC_ALL, "");
    double graus, radianos; //double lê com lf
    printf("Digite o valor em graus->  ");
    scanf("%lf",&graus);
    radianos=Rad(graus);
    printf("%.2lf graus é igual a %.2lf radianos.\n", graus, radianos);
    return 0;
}