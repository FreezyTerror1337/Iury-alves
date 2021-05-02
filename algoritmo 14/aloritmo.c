#include <stdio.h>
#include <time.h>
#include "teste.h"
void cont_idade(FILE *arq, FILE *arq2){
   int dia, mes, ano, idade;
    int diaatual, mesatual, anoatual;
    float resul;
    char nome [40];
    struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
    data_hora_atual = localtime(&segundos);
    diaatual = data_hora_atual->tm_mday;
	mesatual = data_hora_atual->tm_mon+1;
	anoatual = data_hora_atual->tm_year+1900;

	while(!feof(arq)){
		fscanf(arq, "%s %d %d %d",nome,&dia,&mes,&ano);
		idade =  anoatual - ano;
		printf("Nome: %s | Idade: %d\n", nome, idade);
		fprintf(arq2, "Nome: %s | Idade: %d\n", nome, idade);
	}
	return;
}
