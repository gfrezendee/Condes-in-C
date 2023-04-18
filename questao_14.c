#include <stdio.h>

int main() {
	
	float x=0;
	
	//-------------------------------------------------------------
	
	printf("Informe um numero: ");
	scanf("%f",&x);
	fflush(stdin);
	
	//-------------------------------------------------------------
	
	if ((x >= 100) && (x <= 200)){
		printf("O numero %.2f esta entre 100 e 200!!",x);
	}else{	
		printf("O numero %.2f nao esta entre 100 e 200!!",x);
	}
	
	return 0;
}
