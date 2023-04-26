//O código recebe uma idade e informa se o voto é opcional, obrigatório ou se não pode votar. Além disso, em duas idades específicas o usuário ganha um prêmio.

#include <stdio.h>

int main() {
	
	int idade = 0;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	
	if (idade < 0) {	
	printf("Nao nasceu \n");
	} else {
		if (idade <= 15){
			printf("Nao vota \n");
		} else {
			if (idade <= 17){
				printf("Voto opcional \n");
			} else {
				if (idade == 41){
					printf("Ganha premio 1 \n");
				} else {
					if (idade <= 64){
						printf("Voto obrigatorio \n");
					} else {
						if (idade == 82){
							printf("Ganha premio 2 \n");
						} else {
							if (idade >= 65){
								printf("Voto opcional \n");
							}
							}
						}
					}
				}
			}
		}
	
	
	return 0;
}
