/*
O código recebe 4 notas de 4 alunos, calcula a média delas e informa no final. Utiliza o "const" antes
das variáveis para que seu valor não seja alterado e ciclos com "for" para receber e imprimir as notas 
de diferentes alunos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	const int bimestresAnuais = 4;
	const int numeroDeAlunos = 4;
	
	float notasAlunos[4] [4] = {0};
	float mediasAlunos[4] = {0};
	float media = 0;
	int aluno = 0;
	int notas = 0;
	
	printf("Insira as 4 notas do aluno 1:\n");
	
	for (aluno = 0; aluno < 4; ++aluno){
		for (notas = 0; notas < bimestresAnuais; ++notas){
			scanf(" %f", &notasAlunos[aluno] [notas]);
			media += notasAlunos[aluno] [notas];
		}
		mediasAlunos[aluno] = media/4;
		media = 0;
		printf("Insira as 4 notas do aluno %i:\n", aluno + 2);
	}

	for (aluno = 0; aluno < 4; ++aluno) {
		printf("A media do aluno %i e: %.2f\n", aluno + 1, mediasAlunos[aluno]);
	}
	return 0;
}
