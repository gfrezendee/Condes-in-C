#include <stdio.h>

int main() {
	 
	float x=0;
	float y=0;
	float z=0;
	
	//--------------------------------------------------
	
	printf("---------- MEDIA ARITMETICA ----------\n");
	
	printf("Informe o primeiro numero: ");
	scanf("%f",&x);
	
	printf("Informe o segundo numero: ");
	scanf("%f",&y);
	
	printf("Informe o terceiro numero: ");
	scanf("%f",&z);
	
	//--------------------------------------------------
	
	printf("Essa e a media aritmetica dos tres numeros informados: %.2f\n",(x+y+z)/3);
	
	
	return 0;
}
