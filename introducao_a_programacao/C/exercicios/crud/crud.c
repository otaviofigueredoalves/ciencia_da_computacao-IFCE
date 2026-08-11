#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
    int ativo;
} Cliente;

const char *CLIENTES = "clientes.bin";

void criarCliente(){
    Cliente c; // Declaro variável do tipo c
    /*
    Declaro e inicializo um ponteiro do tipo ARQUIVO, ele guardará o endereço de memória. ESSA é a ponte entre o C e o sistema, necessário pois o C não tem permissão de mexer no SO.

    Quando usa o fopen: "Opa, queridissimo Windows/linux, preciso escrever um negócio num arquivo chamado clientes.bin, abre ele pra mim?"

    Então o SO vai lá,acha o arquivo no disco, abre, e devolve o dossiê contendo todas as regras e informações sobre aquele arquivo aberto (estrutura de controle)

    O tipo FILE é uma struct pronta da lib stdio.h

    FILE *arquivo aponta pro endereço de memória onde esse dossiê está guardado

    A struct FILE tem:
        - Identificador (File Descriptor): número/RG que o SO usa pra saber qual é o arquivo;
        - Cursor (Position Indicator): tipo FILE guarda exatamente em qual byte do arquivo o programa está no momento. Se ler 10 bytes o cursor atualiza: "estamos no btye 11"
        - Buffer: como a escrita no HD é lenta para o computador, o tipo FILE cria um rascunho na RAM. O fwrite escreve nesse buffer. Quando o rascunho enche ou você usa o fclose o C pega o bloco e manda pro HD;
        - Flags: guarda variáveis que dizem se tá no fim do arquivo (EOF) ou erro de leitura
    */
    FILE *arquivo = fopen(CLIENTES, "ab");

    if (arquivo == NULL){ // tratamento para casa o arquivo não exista
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    
    printf("Digite o ID:\n ");
    scanf("%d", &c.id); //espera um tipo numérico e o guarda na propriedade id do objeto (endereço de memória) C.
    getchar(); // Quando usa o scanf e aperta enter, o programa pega só o número e o enter "\n" vai pra um canto da memória chamado "buffer do teclado". Pra limpar esse buffer usa-se getchar()
    printf("Digite o nome:\n ");
    fgets(c.nome, 50, stdin); //  ler textos de qualquer lugar, principalmente de arquivos. Stdin é Standard Input. Ao colocar stdin você diz pra função "não leia um arquivo do HD, leia a string do meu teclado"
    c.nome[strcspn(c.nome,"\n")] = 0; // ao contrário do scanf o fgets guarda o "\n". o strcspn procura a posição do \n e ao dizer que é = 0 (ou \0) o ENTER é substituído por . e o C entende que o texto acaba ali

    printf("Digite a idade:\n ");
    scanf("%d", &c.idade);

    c.ativo = 1;
    fwrite(&c, sizeof(Cliente),1,arquivo); // pega os dados que estão no endereço de memória &c, define o tamanho do pacote de dados como o tamanho em bytes de um struct Cliente, define quantos pacotes quer guardar, define onde quer gravar

    fclose(arquivo);  // fechar a "porta" que abriu no HD, liberando a memória do computador (evitar memory leak)
    printf("Cliente cadastrado!\n");
}

void listarClientes(){
    Cliente c;
    FILE *arquivo = fopen(CLIENTES,"rb");

    if(arquivo == NULL){
        printf("Nenhum cliente cadastrado ainda ou erro ao abrir.\n");
        return;
    }
    printf("@=========================@\n");
    printf("@=== LISTA DE CLIENTES ===@\n");
    printf("@=========================@\n");
    while(fread(&c, sizeof(Cliente),1,arquivo )){
        if(c.ativo == 1){
            printf("ID: %d\nNOME: %s\nIDADE: %d\n===============\n", c.id, c.nome, c.idade);
        }
    }
    fclose(arquivo);
}

int main(){
    int choose;

    printf("@== ESCOLHA UMA AÇÃO @==\n");
    printf("[0] -> CRIAR\n");
    printf("[1] -> LISTAR\n");
    printf("[2] -> ATUALIZAR\n");
    printf("[3] -> DELETE\n");
    scanf("%d",&choose);

    switch(choose){
        case 0:
            printf("@==CREATE ESCOLHIDO==@\n");
            criarCliente();
            break;
        case 1:
            printf("@==LISTAR ESCOLHIDO==@\n");
            listarClientes();
            break;
    }

}
