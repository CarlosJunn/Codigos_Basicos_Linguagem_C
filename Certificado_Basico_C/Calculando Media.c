#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float a, b, med;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a Nota 1:");
	scanf("%f",&a);
	printf("Digite a Nota 2:");
	scanf("%f",&b);
	
	med = (a + b)/2;
	
	system("cls");
	printf("Média : %.2f\n",med);
	
	if(med>=5)
		printf("\nAluno aprovado\n");
	else
		printf("\nAluno Reprovado\n");
	
	system("pause");
	return 0;
}
