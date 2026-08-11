#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], sobrenome[50], nomeCompleto[100];
    fgets(nome,sizeof(nome),stdin);
    fgets(sobrenome,sizeof(sobrenome),stdin);
    nome[strcspn(nome, "\n")] = '\0';
    strcat(nome," ");
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    strcat(nome, sobrenome);
    printf("%s",nome);


    return 0;

}