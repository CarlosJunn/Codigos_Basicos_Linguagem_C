#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n;
int i = 0;
int op;
char operador;

int main(){
	setlocale(LC_ALL,"portuguese");
	do{
		system("cls");
		printf("***Tabuada***\n\n");
		printf("Digite o numero da tabuada: ");
		scanf("%d", &n);
		printf("\nDigite um operador: ");
		scanf("%s", &operador);
	/*a linha a baixa  gera um la�o finito*/
		for(i = 0;i <= 10;i++){
			switch(operador){
				case '+': printf("%d %c %d = %d\n",n ,operador ,i ,n+i);
					break;
				case '-': printf("%d %c %d = %d\n",n ,operador ,i ,n-i);
					break;
				case '*': printf("%d %c %d = %d\n",n ,operador ,i ,n*i);
					break;
				case '/': printf("%d %c %d = %d\n",n ,operador ,i ,n/i);
					break;
				default: printf("Operador inv�lido\n");
					break;
			}
		}
		printf("\nDeseja Fazer um novo calculo ?(1 - SIM/2 - N�O)\nResposta: ");
		scanf("%d",&op);
	}while(op != 2);
	system("pause");
	return 0;
}
