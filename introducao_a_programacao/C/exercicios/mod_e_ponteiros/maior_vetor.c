#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int *vetor, int size){
    int maior = vetor[0];
    for(int i = 0; i < size; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}
int main(){
    int *vet, size, i = 0, soma = 0;
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

    int resultado = maiorElemento(vet, size);
    printf("Maior: %d",resultado);
    free(vet);
    return 0;
}