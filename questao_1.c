#include <stdio.h>

int main() {
	
	int copias;
	float valor = 0.25;
	
	//-------------------------------------------------------
	
	printf("--------------- COPIADORA ---------------\n");
	
	printf("Informe a quantidade de copias: ");
	scanf("%d",&copias);
	
	//-------------------------------------------------------
	
	if (copias <= 100){
		printf("O valor e: R$%.2f",valor*copias);
	}else{
		if (copias > 100){
			printf("O valor e: R$%.2f",(valor-0.05)*copias);
		}else{
		}
	}
	
	return 0;
}
