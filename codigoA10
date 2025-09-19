#include<stdio.h>
#include<locale.h>

void Tabuada(int n) {
	int i;
    printf("===============================\nTabuada do %d\n===============================\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    printf("===============================\n");
}

int main() {
	setlocale(LC_ALL, "");
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    Tabuada(n);
    getch();
    return 0;
}