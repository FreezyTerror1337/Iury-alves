#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int main() {
	FILE *arq1, *arq2, *arq3;
	char caracter;

	arq1 = fopen ("D:\\arq.txt","r");
	if (arq1 == NULL){
		printf("Erro na abertura!\n");
		system("pause");
		exit(1);
	}
	arq2 = fopen("D:\\arq2.txt", "r");
	if (arq2==NULL) {
		printf("Erro na abertura!\n");
		exit(1);
	}
	arq3 = fopen("D:\\arq3.txt", "w+");
	if (arq3==NULL) {
		printf("Nao foi possivel criar o arquivo.");
		exit(1);
	}
