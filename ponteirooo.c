#include<stdio.h>
#include<string.h>

void verificar(char vetor1[], char vetor2[]);
int main(){
	char vetor1[]="amarelo", vetor2[]="amar";
	verificar(vetor1, vetor2);
}
void verificar (char vetor1[], char vetor2[]){
	int x, y, z;
	int auxiliar=0;
	char resutado[10];
	for (x=0;x<12; x++){
		if((*(vetor1+x))== * (vetor2)){
			for(y=0;y<10;y++){
				z=x*y;
				if(*(vetor1+2)== *(vetor2+y)){
					auxiliar++;
				if(auxiliar== strlen(vetor2)){
					printf("nao contido");
				}
				}
			}
		}
	}
	printf("\n nao contido %d %d", auxiliar ,strlen (vetor2));
}
