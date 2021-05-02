#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preencher_vetor(int vet[10], int v){
	int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *parte1, *parte2;
	parte1 = vetor;

	for(parte2 = vetor; *(parte2) <= 10; *(parte2)++){
		(parte1+(parte2)) = v;
		printf("Vetor[%d] = %d\r\n", (parte2), *(parte1+(parte2)));
	}
}

int main(){
	int vet[10], v;
	
	printf("Informe um v: ");
	scanf("%d", &v);
	preencher_vetor(vetor, v);
	
	system("pause");
	return 0;
}
