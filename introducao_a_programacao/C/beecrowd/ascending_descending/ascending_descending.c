#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d",&X,&Y);
    while(X != Y){
        if(X > Y){
            printf("Decrescente\n");
            scanf("%d %d",&X,&Y);
        } else if(Y > X){
            printf("Crescente\n");
            scanf("%d %d",&X,&Y);
        } else {
            printf("\n");
            break;
        }
    }
    return 0;
    
}