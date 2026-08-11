#include <stdio.h>

int main()
{
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float A, B, C, aux;
    scanf("%f %f %f", &A, &B, &C);

    if (B > A)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (C > A)
    {
        aux = A;
        A = C;
        C = aux;
    }
    if (C > B)
    {
        aux = B;
        B = C;
        C = aux;
    }
    
    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if((A*A) < (B*B + C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((A*A) > (B*B) + (C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((A*A) == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((A == B || A == C || B == C) && (A != B || A != C || C != B)){
        printf("TRIANGULO ISOSCELES\n");
    }
    if(A == B && A == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    return 0;
}