#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//definir matricula, nome e nota do aluno
typedef struct{
	int id;
	int idade;
	float renda;
	char nome[30];
}cliente;
// definir as variaveis
int main(void){
    cliente cadastro [5];
	printf("\nCadastro de clientes");
	for(int i=0;i<5;i++){
		printf("\nDigite a ID do %d cliente: ", i+1);
		scanf("%d", &cadastro[i].id);
		
		printf("\nDigite a idade do %d cliente: ", i+1);
		scanf("%d", &cadastro[i].idade);
		printf("\nDigite a renda do %d cliente: ", i+1);
		scanf("%f", &cadastro[i].renda);
		printf("\nDigite o nome do %d cliente: ", i+1);
		getchar();
		gets(cadastro[i].nome);
	}

printf("\nPessoas maiores de idade: ");
for(int i=0;i<5;i++){
	if(cadastro[i].idade >=18){
		printf("Nome: %s, Idade: %d ", cadastro[i].nome, cadastro[i].idade);
	}
		}
	system("pause");	
}

