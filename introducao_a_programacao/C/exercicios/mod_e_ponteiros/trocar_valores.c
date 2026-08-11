#include <stdio.h>
#include <stdlib.h>
void trocar(int *a,int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;
}

int main(){
    int valor1, valor2;
    int *num1 = &valor1;
    int *num2 = &valor2;
    scanf("%d %d", &valor1, &valor2);
    trocar(&valor1, &valor2);
    printf("TROCA REALIZADA: %d %d\n", *num1, *num2);
    
}

