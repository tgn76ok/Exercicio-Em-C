#include <stdio.h>
int main(){
    int num[10],soma=0,media;

    for(int i = 0; i<10;i++){
        printf("digite um numero: ");
        scanf("%d",&num[i]);

        soma += num[i];

        }
    media = soma /10;
    for(int i = 0; i<10;i++){
        if(media == num[i]){
            printf("o numero na posicao %d e igual a media",i);
        }
    }
}
