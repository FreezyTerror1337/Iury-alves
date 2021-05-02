#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buffer_clean () {
	int ch;
	while ((ch=fgetc(stdin)) != '\n' && ch != EOF);
}

void pause () {
	printf ("\nPress [ENTER] to continue . . .");
	scanf ("%*c");
}



int main () {

	int i, vermelhas[5], nroSorteado[3], x;

	for (i = 0; i < 5; i++) {
		printf ("Valor posicao %d: ", i);
		scanf ("%d", &vermelhas[i]);
		buffer_clean();
	}

	x=0;
	srand((unsigned)time(NULL));
	for(i=0 ; i < 3 ; i++){
		nroSorteado[x] = rand() % 5;
		printf ("\nPosicao sorteada: %d\n", nroSorteado[x]);
		printf ("Valor nessa posicao: %d\n", vermelhas[nroSorteado[x]]);
		x++;
	} 

	pause();
	return 0;
} 
