#include<stdio.h>
int main(){

    int idade;
    printf("Digite sua idade\n");
    scanf("%d",idade);

    if(idade < 18)
        printf("\nbebidas nao liberadas");
    else
        printf("\nbebidas liberadas");
    

    return 0;
}