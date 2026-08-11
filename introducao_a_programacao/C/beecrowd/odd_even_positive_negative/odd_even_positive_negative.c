#include <stdio.h>
int main(){
    float vetor[6];
    int positivo = 0;
    for(int i = 0; i < 6;i++){
        scanf("%f",&vetor[i]);
        if(vetor[i] > 0){
            positivo++;
        }
    }
    printf("%d valores positivos\n",positivo);
    return 0;
}