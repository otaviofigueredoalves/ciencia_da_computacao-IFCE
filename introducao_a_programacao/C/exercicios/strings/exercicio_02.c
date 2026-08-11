#include <stdio.h>
#include <string.h>

int main(){
    char strOne[50], strTwo[50];
    fgets(strOne,sizeof(strOne),stdin);
    fgets(strTwo,sizeof(strTwo),stdin);
    strOne[strcspn(strOne, "\n")] = '\0';
    strTwo[strcspn(strTwo, "\n")] = '\0';
    if(strcmp(strOne, strTwo) == 0){
        printf("São iguais!\n");
    } else {
        if(strncmp(strOne, strTwo,1) < 0){
            printf("%s\n", strOne);
            printf("%s\n", strTwo);
        } else {
            printf("%s\n", strTwo);
            printf("%s\n", strOne);
        }
    }

    return 0;

}