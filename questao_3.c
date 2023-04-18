#include <stdio.h>

int main() {
	
	float x=0;
	float y=1;
	
	//----------------------------------------------------
	
	printf("--------- QUAL O MAIOR? ---------\n");
	
	printf("Informe o numero 1: ");
	scanf("%f",&x);
	fflush(stdin);
	
	printf("Informe o numero 2: ");
	scanf("%f",&y);
	fflush(stdin);
	
	//----------------------------------------------------
	
	if (x > y){
		printf("O numero %.2f e maior!",x);
	}else{
		printf("O numero %.2f e maior!",y);
	}
	
	return 0;
}
