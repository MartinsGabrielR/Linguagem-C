#include<stdio.h>
int main(){
    //variaveis
    int num ;
    int resp =1;

    //pedir o numero
printf("Digite o numero:\n");
scanf("%d",&num);

//condição
for ( ; num >= 1; --num)
{
   resp *= num;
  
}

 printf("%i\n",resp);

    return 0;
}