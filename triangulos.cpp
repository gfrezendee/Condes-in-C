#include <stdio.h>
#include <stdlib.h>

int main(void){

float a, b, c;

printf("Informe o valor do lado 'a': ");
scanf("%f",&a);
printf("Informe o valor do lado 'b': ");
scanf("%f",&b);
printf("Informe o valor do lado 'c': ");
scanf("%f",&c);

if((a<b+c)&&(b<a+c)&&(c<a+b)){
if((a==b)&&(a==c)){
    printf("O triangulo e EQUILATERO!");
}else if((a==b)||(a==c)||(b==c)){
    printf("O triangulo e ISOSCELES!");
}else if((a!=b)&&(a!=c)&&(b!=c)){
    printf("O triangulo e ESCALENO!");
}
}else{
    printf("NAO E UM TRIANGULO!!!!");
}
    return 0;
}


