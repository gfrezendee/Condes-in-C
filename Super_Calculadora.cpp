#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2 prototipação
int le_valida_n1();
int le_valida_n2();
char le_valida_operador();
int soma(int n1, int n2);
int divisao(int n1, int n2);
int sub(int n1, int n2);
int multi(int n1, int n2);
void cabecalho();
void rodape();
void resultado(char op, int n1, int n2);
char agoravai();

int main(){
setlocale(LC_ALL, "Portuguese");
	
    int n1=0, n2=0;
    char op,continuar;

    do{        
        cabecalho();
        n1 = le_valida_n1(); //3 chamada da função le_valida_n1
        op = le_valida_operador();
        n2 = le_valida_n2();
        resultado(op, n1, n2);
        continuar = agoravai();
    }while(continuar=='S' || continuar=='s');

    return 0;
}

//1 declaração
int le_valida_n1(){
    int n1=0;
    do{
        printf("Informe o primeiro valor: ");
        scanf("%d",&n1);
    }while(n1<0 || n1>100);
    return n1;
}

int le_valida_n2(){
    int n2=0;
    do{
        printf("Informe o segundo valor: ");
        scanf("%d",&n2);
    }while(n2<0 || n2>100);
    return n2;
}

char le_valida_operador(){
    char operador;

    do{
        printf("Informe a operacao: ");
        scanf(" %c",&operador); //-
    }while(operador!='+' && operador!='-' && operador!='*' && operador!='/');

    return operador;
}

int soma(int n1, int n2){
    cabecalho();
    printf("|          O resultado da           |\n");
    printf("|           soma %d+%d é              |\n", n1,n2);
    printf("|                %d                  |\n",n1+n2);    
    rodape();
    return 0;
}

int sub(int n1, int n2){
    cabecalho();
    printf("|          O resultado da           |\n");
    printf("|           subtração %d-%d é         |\n", n1,n2);
    printf("|                %d                  |\n",n1-n2);    
    rodape();
    return 0;
}

int divisao(int n1, int n2){
    cabecalho();
    printf("|          O resultado da           |\n");
    printf("|         divisao %d/%d é             |  \n", n1,n2);

    if(n2!=0){
        printf("|                %d                  | \n",n1/n2);    
    }else{
        printf("|  Rapaz nao existe div por zero    |\n");    
    }
   
    rodape();
    return 0;
}

int multi(int n1, int n2){
    cabecalho();
    printf("|          O resultado da           |\n");
    printf("|        multiplicação %d*%d é        |\n", n1,n2);
    printf("|                %d                  |\n",n1*n2);    
    rodape();
    return 0;
}

void cabecalho(){
    system("cls");
    printf("+-----------------------------------+\n");
    printf("|             SUPER CALC            |\n");
    printf("+-----------------------------------+\n");
}

void rodape(){
    printf("+-----------------------------------+\n");
    printf("|           Copyright 2023          |\n");
    printf("+-----------------------------------+\n");    
}

void resultado(char op, int n1, int n2){
        switch(op){
            case '+':
                soma(n1,n2);
            break;
            case '-':
                sub(n1,n2);
            break;  
            case '/':
                divisao(n1,n2);
            break;  
            case '*':
            	multi(n1,n2);
            break;
        }
}

char agoravai(){
        char continuar;
        printf("|      Deseja continuar? (S/N): ");
        scanf(" %c",&continuar);
        printf("+-----------------------------------+\n");
    return continuar;
}
