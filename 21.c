#include <stdio.h>

int main(){
    int par[12],impar[12];
    int num,contpar=0,contimpar=0;

    for(int i = 0; i<12;i++){
        printf("digite um numero: ");
        scanf("%d",&num);


        if(num%2 == 0){
            par[contpar] = num;
            contpar++;
        }else{
            impar[contimpar] = num;
            contimpar++;

        }
    }

    printf("[");
    for(int i = 0; i<contimpar-1;i++){
        printf("%d,",impar[i]);
    }
    printf("%d]",impar[contimpar-1]);
    /*-----------------------*/
     printf("[");
    for(int i = 0; i<contpar-1;i++){
        printf("%d,",par[i]);
    }
    printf("%d]",par[contpar-1]);

}
