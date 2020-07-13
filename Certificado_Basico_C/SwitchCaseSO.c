#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero;

int main(){

	setlocale(LC_ALL,"portuguese");
	/*printa as opções e le a escolha*/
	printf("Sistemas\n\n");
	printf("1 - Windows\n");
	printf("2 - Linux\n");
	printf("\nEscolha as opções desejadas: ");
	scanf("%d", &numero);
	/*estrutura com multiplas decisões*/
	switch(numero){
		case 1:
			system("cls");
			printf("Iniciando o Windows...\n");
			break;
		case 2:
			system("cls");
			printf("Iniciando Linux...\n");
			break;
		/*Caso nenhum dous casos anteriores forem validos*/
		default:
			printf("Opção inválida\n");
	}
	
	system("pause");
	return 0;
}
