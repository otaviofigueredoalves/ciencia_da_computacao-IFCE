#include <stdio.h>

int main()
{
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int start, end, resultado;
    scanf("%d %d", &start,&end);

    if(start > end){
        resultado = 24 - start + end;
        printf("O JOGO DUROU %d HORA(S)\n", resultado);
    }
    if(start == end){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(start < end){
        resultado = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", resultado);
    }

    return 0;
}