#include<stdio.h>
#include<locale.h>
double FC(double fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0;  //conta de Celsius é F-32 vezes 5 dividido por 9
}

int main() 
{
	setlocale(LC_ALL, "");
    double fahrenheit,celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf",&fahrenheit);
    celsius = FC(fahrenheit);
    printf("%.2lf graus Fahrenheit é igual a %.2lf graus Celsius.\n",fahrenheit,celsius);
    return 0;
}