#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int tamanho, j = 0;
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';
    for(int i = 0; nome[i]!='\0'; i++){
        if(nome[i] != ' '){
            nome[j] = nome[i];
            j++;
        }
    }
    nome[j] = '\0';
    tamanho = strlen(nome);
    char firstL = nome[0];
    char lastL = nome[tamanho -1];

    printf("O tamanho é: %d\n", tamanho);
    printf("A primeira letra é: %c\n", firstL);
    printf("A última letra é: %c\n", lastL);

    return 0;

}