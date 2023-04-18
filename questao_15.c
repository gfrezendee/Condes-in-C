#include <stdio.h>

int main() {
	
	float salario = 0;
	float aumento = 0;
	float salario_final = 0;
	
	//-------------------------------------------------------------------------
	
	printf("----------------- AUMENTO DO SALARIO -----------------\n");
	
	printf("Informe o salario: ");
	scanf("%f",&salario);
	
	//---------------------------------------------------------------------------
	
	aumento = salario*0.1;
	salario_final = salario+aumento;
		if (salario > 1000){
		printf("Operacao invalida, o valor maximo e de R$1000.00");
	}else{
		printf("Salario com aumento: R$%.2f \n",salario_final);
	}
	
	return 0;
}
