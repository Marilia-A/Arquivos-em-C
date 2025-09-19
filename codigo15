#include<stdio.h>
#include<locale.h>
#include <math.h>

int bhaskara(double a, double b, double c, double *raiz1, double *raiz2) {
	double delta;
    if(a==0) return -1;
    delta = b*b - 4*a*c;  //delta é B ao quadrado - 4 vezes A vezes C 
    if(delta<0){
     return 0;
	} 
    if(delta==0){
        *raiz1=-b/(2*a);  //raiz de x é igual a -B +/- raiz quadrada de Delta dividido por 2 vezes A
        return 1;
    }
    *raiz1=(-b+sqrt(delta))/(2*a);  //precisa ser separado pq não tem como fazer junto
    *raiz2=(-b-sqrt(delta))/(2*a);
    return 2;
}

int main() {
    double a, b, c, raiz1, raiz2;
    int nRaizes;
    printf("Digite o coeficiente a-> ");
    scanf("%lf",&a);
    printf("Digite o coeficiente b-> ");
    scanf("%lf",&b);
    printf("Digite o coeficiente c-> ");
    scanf("%lf",&c);
    nRaizes=bhaskara(a, b, c, &raiz1, &raiz2);
    if(nRaizes==-1){
     printf("Erro: O coeficiente 'a' não pode ser zero.\n");
    } 
	else if(nRaizes==0){
     printf("Nenhuma raiz real.\n");
    } 
	else if(nRaizes==1){
     printf("Uma raiz real: %.2lf\n",raiz1);
    } 
	else{
        printf("Duas raízes reais: %.2lf e %.2lf\n",raiz1,raiz2);
    }
    return 0;
}