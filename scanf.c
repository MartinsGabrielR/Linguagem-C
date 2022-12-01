#include<stdio.h>
int main(){

double area, base, altura;

    printf(":::Area do triangulo:::\n");

    printf("Digite a base:\n");
    scanf("%lf",&base);

    printf("Digite a altura:\n");
    scanf("%lf",&altura);
    
    area = (base* altura)/2;

    printf("Area: %0.2lf\n",area);



    return 0;
}