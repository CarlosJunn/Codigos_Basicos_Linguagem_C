#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste(void);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Teste de Função\n\n");
	system("pause");
	system("cls");
	teste();
	
	return 0;
}

void teste(void){
	printf("Menssagem Função\n\n");
}
