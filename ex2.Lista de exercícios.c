#include <stdio.h>

void maiormenor(int *a, int *b){
	int cont;

	cont = *a;
	if (cont > *b){
        *a = *a;
        *b = *b;
	}else{
        *a = *b;
        *b = cont;
	}
}

int main (){
    int a, b;

	printf  ("Informe o primeiro valor: ");
		scanf("%d", &a);
	printf  ("Informe o segundo valor: ");
		scanf("%d", &b);

    maiormenor(&a, &b);

    printf  ("O valor da primeiro variavel e: %d\n", a);
    
    printf  ("O valor da segunda variavel e: %d\n", b);
    return 0;
}
