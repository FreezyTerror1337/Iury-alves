#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificacao(char texto[51], char texto1[51]){
	int tam1, tam2, c = 0, i, j;
	tam1 = strlen(texto);
	tam2 = strlen(texto1);
	char *p1, *p2;
	p1 = texto;
	p2 = texto1;

	for(i=0; i<=tam1;i++){
		if(*(p2) == *(p1+i)){
			i=i+1;
			if(*(p2+1) == *(p1+i)){
				for(j=2;j<=tam2;j++){
					i=i+1;
					if(*(p2+j) == *(p1+i)){
						c++;
					}
				}
				break;
			}
		}
	}
	c = c+1;
	return c;		
}

int main(){
	char texto[51], texto1[51];
	int re, tam2;
	
	printf("Digite a 1 string: ");
	scanf("%s",texto);
	printf("Digite a 2 string: ");
	scanf("%s",texto1);
	
	re = verificacao(texto, texto1);
	tam2 = strlen(texto1);
	
	if (re == tam2){
		printf("String 2 nao contida na String 1\n");
	}else{
		printf("String 2 nao contida na String 1\n");
	}
	
	system("pause");
	return 0;
}
