#include<stdlib.h>
#include<stdio.h>
#include <time.h>
#include <string.h>
#include "header.h"
int main(void){
    FILE *arq1, *arq2;
    char nome1[20], nome2[20];
	char caracter;
	arq1 = fopen(nome1, "r");
	if (arq1==NULL) {
		printf("Arquivo nao existe.");
		exit(1);
	}
	arq2 = fopen(nome2, "w");
	if (arq2==NULL) {
		printf("Nao foi possivel criar o arquivo.");
		exit(1);
	}
	caracter=getc(arq1);
	while (caracter!=EOF){
		fputc(toupper(caracter), arq2);
		caracter = fgetc(arq1);
	}
	fclose(arq1);
	fclose(arq2);
	printf("Conversão realizada com sucesso\n");
	system("pause");
	return 0;

}
