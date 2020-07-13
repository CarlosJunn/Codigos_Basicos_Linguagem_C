#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float a, b, med;
	
	setlocale(LC_ALL,"portuguese");
	/*lendo duas variaveis*/
	printf("Digite a Nota 1:");
	scanf("%f",&a);
	printf("Digite a Nota 2:");
	scanf("%f",&b);
	/*processa os dados*/
	med = (a + b)/2;
	/*limpa a tela e printa o resultado*/
	system("cls");
	printf("Média : %.2f\n",med);
	/*Estrutura condicionais/decisão IF/ELSE*/
	if(med>=5)
		printf("\nAluno aprovado\n");
	else
		printf("\nAluno Reprovado\n");
	
	system("pause");
	
	return 0;
}
