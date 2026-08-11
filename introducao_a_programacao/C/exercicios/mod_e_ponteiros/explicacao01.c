#include <stdio.h>
void incrementar(int *x){
    (*x)++;
}
int main(){
    int numero = 50;
    int *p = &numero;

    printf("valor: %d\n", numero);
    printf("endereço: %p\n",&numero);
    incrementar(&numero);
    printf("valor pelo ponteiro: %d\n", *p);
    printf("INCREMENTO: %d\n",numero);
    return 0;
}

