#include <stdio.h>
#include <stdlib.h>

int quadrado(int *numero){
    return *numero * *numero;
}
int main(){
    int numero;
    int *numP = &numero;
    scanf("%d", &numero);
    *numP = quadrado(&numero);
    printf("O quadrado é: %d\n", *numP);
}