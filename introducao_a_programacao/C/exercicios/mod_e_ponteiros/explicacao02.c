#include <stdio.h>
void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main(){
    int x = 10;
    int y = 20;
    trocar(&x,&y);
    printf("%d %d\n", x,y);
}