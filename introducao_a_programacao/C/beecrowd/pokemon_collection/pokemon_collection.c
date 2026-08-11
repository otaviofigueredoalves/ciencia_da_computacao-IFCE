#include <stdio.h>
#include <string.h>

int main() {
    int N, totalUnicos = 0;
    char colecao[1000][1001];
    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < N; i++) {
        char pomekonAtual[1001];
        scanf("%s", pomekonAtual);

        int jaExiste = 0;
        for (int j = 0; j < totalUnicos; j++) {
            if (strcmp(colecao[j], pomekonAtual) == 0) {
                jaExiste = 1;
                break;
            }
        }

        if (!jaExiste) {
            strcpy(colecao[totalUnicos], pomekonAtual);
            totalUnicos++;
        }
    }

    int faltam = 151 - totalUnicos;
    printf("Falta(m) %d pomekon(s).\n", faltam);

    return 0;
}