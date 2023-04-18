#include <stdio.h>

int main() {
	
	int x=0;
	
	//------------------------------------------------------------------
	
	printf("-------------- SEU NUMERO E PAR?--------------\n");
	
	printf("Informe um numero inteiro: ");
	scanf("%d",&x);
	
	//-------------------------------------------------------------------
	
	if (x%2 == 0){
		printf("O numero %d e par!!",x);
	}else{
		printf("O numero %d nao e par!!",x);
	}
	

	return 0;
}
