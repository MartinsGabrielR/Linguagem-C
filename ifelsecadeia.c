#include<stdio.h>
int main(){

int idade;
printf("Digite a sua idade:\n");
scanf("%d",&idade);

if(idade<= 5)
 printf("bebe\n");
   else if(idade>5 && idade <= 10)
    printf("crianca\n");
      else if(idade>10 && idade <=18)
       printf("adolescente\n");
         else if(idade > 18 && idade <=50)
          printf("adulto\n");
           else
            printf("idoso");

    return 0;
}