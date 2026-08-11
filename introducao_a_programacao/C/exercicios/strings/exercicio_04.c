#include <stdio.h>
#include <string.h>

int main()
{
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}, frase[200];
    int temVogal = 0, quantidade, temConsoante = 0, temEspaco = 0;
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    quantidade = strlen(frase);
    // printf("%d\n", quantidade);
    for (int i = 0; i < quantidade; i++)
    {
        int achouVogal = 0;
        for (int j = 0; j < 10; j++)
        {
            if (frase[i] == vogais[j]){
                achouVogal = 1;
                break;
            }
        }

        if(achouVogal == 1){
            temVogal++;
        } else if (frase[i] == ' '){
            temEspaco++;
        } else {
            temConsoante++;
        }
    }
    printf("Tem %d vogal(is)\n", temVogal);
    printf("Tem %d consoante(s)\n", temConsoante);
    printf("Tem %d espaço(s)\n", temEspaco);
    return 0;
}