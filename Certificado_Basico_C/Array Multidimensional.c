#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	//exibe o conteudo da variavel nota3 sem uso do array
	printf("Sem array\n");
	printf("Nota3: %.1f\n",nota3);
	//a linha abaixo cria um array tamanho4
	float notas[4] = {8,6,9,3};
	printf("com array\n");
	printf("Nota3: %.1f\n",notas[2]);
	//a linha abaixo modifica o contador de um array
	notas[1] = 7;
	printf("Modificando o contador do array\n");
	printf("Nota3: %.1f\n", notas[1]);
	//a linha abaixo cria um array de duas dimensões conforme boletim do aluno
	float boletim[2][4]={{8,7,9,3},{4,5,8,6}};
	//recuperando a nota de portugues do 1º bimestre
	printf("Nota: %.1f\n", boletim[1][0]);
	system("pause");
	return 0;
}
