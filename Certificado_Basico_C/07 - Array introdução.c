#include <stdio.h>
#include <stdlib.h>

int main(){
	/*declarando variaveis do tipo float = flutuante*/
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	/*exibe o conteudo da variavel nota3 sem uso do array*/
	printf("Sem array\n");
	printf("Nota3: %.1f\n",nota3);
	/*a linha abaixo cria um array tamanho4*/
	float notas[4] = {8,6,9,3};
	printf("com array\n");
	printf("Nota3: %.1f\n",notas[2]);
	/*A linha abaixo modifica o contador de um array*/
	notas[1] = 7;
	printf("Modificando o contador do array\n");
	printf("Nota3: %.1f\n", notas[1]);
	system("pause");
	
	return 0;
}
