#include <stdio.h>
#include <locale.h>
void Cabecalho(const char* inst, const char* disc, const char* nome) {
    printf("============================================\n");
    printf("IFG – %s\n", inst);
    printf("Disciplina de %s\n", disc);
    printf("\nNome: %s\n", nome);
    printf("============================================\n");
}
int main() {
	setlocale(LC_ALL, "");
    const char* inst="Instituto Federal de Goiás";
    const char* disc="Algoritmos e Técnicas de Programação";
    const char* nome="Aladir Jr";
    Cabecalho(inst, disc, nome);
    getch();
    return 0;
}