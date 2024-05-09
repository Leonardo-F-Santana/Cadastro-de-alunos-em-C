#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//definir matricula, nome e nota do aluno
typedef struct{
	int matricula;
	char nome[20];
	float nota;
}aluno;
int main (void){
	aluno cadastro [3];
	printf("\nCadastro dos alunos");
	for(int i=0;i<3;i++){
		printf("\nCadastrar a matricula: ", i+1);
		scanf("%d", &cadastro[i].matricula);
		printf("\nCadastrar o nome: ", i+1);
		scanf("%c", &cadastro[i].nome);
		gets(cadastro[i].nome);
		printf("\nCadastrar a nota: ");
		scanf("%f", &cadastro[i].nota);
		getchar();
		
	}
printf("\nAlunos aprovados: ");
for(int i=0;i<3;i++){
	if(cadastro[i].nota >=7){
		printf("\nNome: %s, Nota %f", cadastro[i].nome, cadastro[i].nota );
	}
}
printf("\nAlunos reprovados: ");
for(int i=0;i<3;i++){
	if(cadastro[i].nota <=6.9){
		printf("\nNome %s, Nota %f", cadastro[i].nome, cadastro[i].nota);
	}
}
system("pause");
}