#include <stdio.h>
#include <stdlib.h>

int main(void){

float f, m, a, r, A, P;
int cond;

do{
printf("\n\nDigite uma das opcoes a seguir para iniciar: \n");
printf("0- sair.\n");
printf("1- calcular forca.\n");
printf("2- calcular area e perimetro de circunferencia.\n\n");
printf("Opcao: ");
scanf("%i",&cond);

switch (cond)
{
case 0: 
    printf("Saindo...\n");
    break;
case 1: 
    printf("Informe a massa: ");
    scanf("%f",&m);
    printf("Informe a aceleracao: ");
    scanf("%f",&a);

    f=m*a;

    printf("A forca e: %.2f",f);

    break;
case 2: 
    printf("Informe o raio: ");
    scanf("%f",&r);

    A=3.14*(r*r);
    P=2*3.14*r;

    printf("A area e: %.2f \nO perimetro e: %.2f",A, P);
    break;
default:
printf("Opcao invalida!");
    break;
}

} while (cond>0);
    return 0;
}