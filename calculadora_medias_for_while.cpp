/*
O código calcula médias, mas utilizando um ciclo com while para calcular quantas vezes quiser, 
sendo encerrado quando o usuário quiser.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x, y;
	char esc;
	float nota, media, total;
	total = 0;
	y = 1;
	
	printf("Deseja calcular uma media (responda com 's' ou 'n')? ");
	scanf(" %s",&esc);
	
	while(esc == 's'){
	
	for(x = 1;x<=4;x++){
		printf("\nDigite a nota %i do aluno: ",y);
		scanf("%f",&nota);
		total += nota;
		y++;
	}
	
	media = total/4;
	printf("\nA media do aluno e: %.2f\n\n",media);
	
	if(media >= 7){
		printf("Aluno aprovado!");
	}else{
		printf("Aluno reprovado!");
	}
	y = 1;
	total = 0;
	
	printf("\nDeseja calcular uma media (responda com 's' ou 'n')? ");
	scanf(" %s",&esc);
	}
	
	return 0;
}
