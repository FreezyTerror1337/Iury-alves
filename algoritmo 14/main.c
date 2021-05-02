#include <stdio.h>
#include <stdlib.h>
#include "teste.h"
#include <time.h>

int main(void)
{
    FILE *arq, *arq2;

    arq = fopen ("ArqTeste.txt","r");
    if (arq == NULL){
		printf("Erro na Leitura do Arquivo\n.");
		system("pause");
	}

	arq2 = fopen ("NomeIdade.txt","wb");
    if (arq2 == NULL){
		printf("Erro na Criacao do Arquivo\n.");
		system("pause");
    }

cont_idade( arq, arq2);
fclose(arq2);
    system("pause");
    return 0;

}
