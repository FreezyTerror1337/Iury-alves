
#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int main(){
caracter=getc(arq1);
	while (caracter!=EOF){
		if (caracter =='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
			putc(caracter, arq3);
			caracter=getc(arq1);
		}else{
			putc(caracter, arq3);
			caracter=getc(arq1);
		}
	}
		caracter=getc(arq2);
	while (caracter!=EOF){
		if (caracter =='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
			putc(caracter, arq3);
			caracter=getc(arq2);
		}else{
			putc(caracter, arq3);
			caracter=getc(arq2);
		}
	}
