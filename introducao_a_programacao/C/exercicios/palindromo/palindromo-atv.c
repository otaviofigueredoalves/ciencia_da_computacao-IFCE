#include <stdio.h>

int main() {
    int vet[] = {1,2,3,4,3,2,1};
    int tam = 7;
    int palindromo = 1;

    for(i=0;i<=(tam/2);i++){
        if(vet[i] != vet[tam-1-i]){
            palindromo = 0;
            break();
        }
    }


    return 0;
}