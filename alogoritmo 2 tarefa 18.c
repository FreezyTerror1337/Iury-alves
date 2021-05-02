#include <stdio.h>
#include<stdlib.h>
int main (){
	
char prod[30];
float qtd, valor, total = 0.0;
FILE *f = fopen("compras.txt", "r");
if(f == NULL){
	printf("erro na abertura\n");
	exit(1);
}
while(!feof(f)){
	fscanf(f, "%s %f %f",prod,&qtd,&valor);
	total += qtd * valor;
}
printf("total = $f\n,total");
system("pause");
return 0;
}
