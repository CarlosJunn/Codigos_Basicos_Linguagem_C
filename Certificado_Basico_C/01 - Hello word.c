/*as linhas abaixo "chamam" as bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc,char *argv[])
{
	/*linha a baixo configura o idioma para portugues*/
	setlocale(LC_ALL,"Portuguese");
	/*o comando system são para incluirem ações ao terminal*/
	system("color 0F");
	printf("Olá Mundo\n");
	
	system("pause"); 
	system("cls");
	system("color F0");
	
	printf("Tela limpa\n");
	system("pause");
	
	return 0;
}
