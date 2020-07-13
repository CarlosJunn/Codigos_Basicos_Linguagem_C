#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*declara a função fora da função principal*/
void teste(void);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Teste de Funções\n\n");
	system("pause");
	system("cls");
	/*chama a função*/
	teste();
	
	return 0;
}
/*corpo da função*/
void teste(void){
	printf("Menssagem Função\n\n");
}
