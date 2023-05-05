#include <stdio.h>

int main() {
	
	char Razao [100];
	char Nome [100];
	char Endereco [25];
	char Numero [5];
	char Complemento [20];
	char Bairro [50];
	char CEP [8];
	char Estado [2];
	char Cidade [50];
	char DDD1 [3];
	char Telefone1 [8];
	char DDD2 [3];
	char Telefone2 [9];
	char CPF [11];
	char CNPJ [14];
	char Insc1 [12];
	char Insc2 [8];
	char CNAE [8];
	char Data1 [15];
	char Boleto [3];
	char Email [50];
	char Contato [20];
	char Telefone3 [9];
	char Data2 [15];
	char Assinatura [20];
	char Placa1 [7];
	char Modelo1 [20];
	char Ano1 [4];
	char Cor1 [11];
	char Placa2 [7];
	char Modelo2 [20];
	char Ano2 [4];
	char Cor2 [11];
	char Placa3 [7];
	char Modelo3 [20];
	char Ano3 [4];
	char Cor3 [11];
	
	printf("\n");
	printf("\n");
	printf("DADOS DO CREDENCIADO (informe os dados solicitados a seguir) \n");
	printf("Caso nao possua algum dos dados, utilize: -\n ");
	printf("\n");
	
	
	printf("Razao Social: ");
	scanf(" %[^\n]s",&Razao);
	
	printf("Nome Completo: ");
	scanf(" %[^\n]s",&Nome);
	
	printf("Endereco: ");
	scanf(" %[^\n]s",&Endereco);
	
	printf("Numero: ");
	scanf(" %[^\n]s",&Numero);
	
	printf("Complemento: ");
	scanf(" %[^\n]s",&Complemento);
	
	printf("Bairro: ");
	scanf(" %[^\n]s",&Bairro);
	
	printf("CEP: ");
	scanf(" %[^\n]s",&CEP);
	
	 printf("Estado: ");
        scanf(" %[^\n]s",Estado);
        
        printf("Cidade: ");
        scanf(" %[^\n]s",Cidade);
        
        printf("\n");
        printf("Telefone comercial \n");
        printf("\n");
        
        printf("DDD: ");
        scanf(" %[^\n]s",DDD1);
        
        printf("Telefone: ");
        scanf(" %[^\n]s",Telefone1);
        
		printf("\n");
        printf("Telefone celular \n");
        printf("\n");
        
        printf("DDD: ");
        scanf(" %[^\n]s",DDD2);
        
        printf("Telefone: ");
        scanf(" %[^\n]s",Telefone2);
        
        printf("CPF: ");
        scanf(" %[^\n]s",CPF);
        
        printf("CNPJ (apenas para PJ): ");
        scanf(" %[^\n]s",CNPJ);
        
        printf("Inscricao estadual (apenas para PJ): ");
        scanf(" %[^\n]s",Insc1);
        
        printf("Inscricao municipal (apenas para PJ): ");
        scanf(" %[^\n]s",Insc2);
        
        printf("CNAE (apenas para PJ): ");
        scanf(" %[^\n]s",CNAE);
        
        printf("Data de nascimento: ");
        scanf(" %[^\n]s",Data1);
        
        printf("Deseja receber os proximos boletos por e-mail? (responda com s ou n): ");
        scanf(" %[^\n]s",Boleto);
        
        printf("E-mail: ");
        scanf(" %[^\n]s",Email);
        
        printf("Contato do responsável(apenas para PJ): ");
        scanf(" %[^\n]s",Contato);
        
        printf("Telefone comercial: ");
        scanf(" %[^\n]s",Telefone3);
        
        printf("Data: ");
        scanf(" %[^\n]s",Data2);
        
        printf("Assinatura do resposavel: ");
        scanf(" %[^\n]s",Assinatura);
        
        
        printf("\n");
        printf("DADOS DOS VEÍCULOS\n");
        printf("\n");
        
        
        printf("Placa do veiculo 1: ");
        scanf(" %[^\n]s",Placa1);
        
        printf("Modelo veicular 1: ");
        scanf(" %[^\n]s",Modelo1);
        
        printf("Ano do veiculo 1: ");
        scanf(" %[^\n]s",Ano1);
        
        printf("Cor do veiculo 1: ");
        scanf(" %[^\n]s",Cor1);
	
	  printf("\n");
	
	printf("Placa do veiculo 2: ");
        scanf(" %[^\n]s",Placa2);
        
        printf("Modelo veicular 2: ");
        scanf(" %[^\n]s",Modelo2);
        
        printf("Ano do veiculo 2: ");
        scanf(" %[^\n]s",Ano2);
        
        printf("Cor do veiculo 2: ");
        scanf(" %[^\n]s",Cor2);
        
          printf("\n");
        
        printf("Placa do veiculo 3: ");
        scanf(" %[^\n]s",Placa3);
        
        printf("Modelo veicular 3: ");
        scanf(" %[^\n]s",Modelo3);
        
        printf("Ano do veiculo 3: ");
        scanf(" %[^\n]s",Ano3);
        
        printf("Cor do veiculo 3: ");
        scanf(" %[^\n]s",Cor3);
	
	printf("\n");
	("DADOS DO CREDENCIADO\n");
	printf("\n");
	
	printf("Razao social: %s\n",Razao);
	printf("Nome: %s\n",Nome);
	printf("Endereco: %s\t",Endereco);
	printf("Número: %s\n",Numero);
	printf("Complemento: %s\t",Complemento);
	printf("Bairro: %s\n",Bairro);
	printf("CEP: %s\n",CEP);
	printf("Estado: %s\t",Estado);
	printf("Cidade: %s\n",Cidade);
	printf("Telefone Comercial: %s\t",DDD1);
	printf("%s\n",Telefone1);
	printf("Telefone Celular: %s\t",DDD2);
	printf("%s\n",Telefone2);
	printf("CPF: %s\t",CPF);
	printf("CNPJ: %s\n",CNPJ);
	printf("Inscricao Estadual: %s\t",Insc1);
	printf("Inscricao Municipal: %s\n",Insc2);
	printf("CNAE: %s\t",CNAE);
	printf("Data de nascimento: %s\t",Data1);
	printf("Deseja receber os boletos por e-mail?: %s\n",Boleto);
	printf("E-mail: %s\n",Email);
	printf("Contato do Responsável: %s\t",Contato); 
	printf("Telefone Comercial: %s\n",Telefone3);
	printf("Data: %s\t \t",Data2);
	printf("Assinatura do Responsavel: %s\n",Assinatura);
	
	printf("\n");
    printf("DADOS DOS VEÍCULOS\n");
    printf("\n");
      
	printf("Placa 1: %s\n",Placa1);  
	printf("Modelo 1: %s\n",Modelo1);
	printf("Ano 1: %s\n",Ano1);
	printf("Cor 1: %s\n",Cor1);
	
	printf("\n");
	
	printf("Placa 2: %s\n",Placa2);  
	printf("Modelo 2: %s\n",Modelo2);
	printf("Ano 2: %s\n",Ano2);
	printf("Cor 2: %s\n",Cor2);
	
	printf("\n");
	
	printf("Placa 3: %s\n",Placa3);  
	printf("Modelo 3: %s\n",Modelo3);
	printf("Ano 3: %s\n",Ano3);
	printf("Cor 3: %s\n",Cor3);
	
	
	
	
	
	
	
	
	return 0;
}
