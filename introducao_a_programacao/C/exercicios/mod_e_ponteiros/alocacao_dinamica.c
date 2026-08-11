#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet;

    vet = malloc(3 * sizeof(int));
    vet[0] = 10;
    vet[1] = 20;
    vet[2] = 30;

    /**
     * Verificar o retorno de malloc() e realloc()
     */
    if(vet == NULL){
        printf("Erro de alocação.\n");
    }

    vet = realloc(vet, 5 * sizeof(int));
    vet[3] = 40;
    vet[4] = 50;

    for(int i = 0; i < 5; i++){
        printf("%d\n", vet[i]);
    }
    free(vet);
    return 0;
}