#include <stdio.h>
#include <stdlib.h>
void imprimirValores(int *vetor, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("ELEMENTO: %d - %d\n", i, vetor[i]);
    }
}
int main()
{
    int *vet, size, i = 0, soma = 0;
    scanf("%d", &size);
    vet = malloc(size * sizeof(int));

    if (vet == NULL)
    {
        printf("Erro de alocação\n");
        return 1;
    }

    while (i < size)
    {
        scanf("%d", &vet[i]);
        soma += vet[i];
        i++;

        if (i == size)
        {
            int select = 0;
            printf("Digite [0] para encerrar ou [1] para inserir novos valores\n");
            scanf("%d", &select);

            if (select != 0)
            {
                scanf("%d", &size);
                vet = realloc(vet, size * sizeof(int));

                if (vet == NULL)
                {
                    printf("Erro de alocação\n");
                    return 1;
                }
            }
            else
            {
                break;
            }
        }
    }
    imprimirValores(vet, size);

    free(vet);
    return 0;
}