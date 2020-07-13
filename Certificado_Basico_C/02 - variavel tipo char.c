#include <stdio.h>
#include <stdlib.h>

int main(){
    /*a linha abaixo delcara a variavel do tipo char*/
    char nome[30];
    printf("Digite seu nome: ");
    /*a linha abaixo le o conteudo da variavel e limpa a tela*/
    gets(nome);
    system("cls");
    /*a linha abaixo printa o conteudo da variavel na tela*/
    printf("Seja Bem Vindo: %s",nome);
    /*a linha abaixo pausa e limpa a tela do programada*/
    system("pause");
    system("cls");
    
    return 0;
}