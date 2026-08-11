#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, size, i = 0, soma = 0;
    printf("tamanho vetor:\n ");
    scanf("%d",&size);
    vet = malloc(size * sizeof(int));

    if(vet == NULL){
        printf("Erro de alocação\n");
        return 1;
    }

    while(i < size){
        scanf("%d", &vet[i]);
        soma+=vet[i];
        i++;
    }
    printf("A soma dos números é: %d ",soma);

    free(vet);
    return 0;
}