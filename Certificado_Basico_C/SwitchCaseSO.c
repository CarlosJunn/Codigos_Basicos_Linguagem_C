#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;

int main(){

	setlocale(LC_ALL,"portuguese");

	printf("Sistemas\n\n");
	printf("1 - Windows\n");
	printf("2 - Linux\n");
	printf("\nEscolha as op��es desejadas: ");
	scanf("%d", &numero);
	
	switch(numero){
		case 1:
			system("cls");
			printf("Iniciando o Windows...\n");
			break;
		case 2:
			system("cls");
			printf("Iniciando Linux...\n");
			break;
		default:
			printf("Op��o invalida\n");
	}
	
	system("pause");
	return 0;
}
