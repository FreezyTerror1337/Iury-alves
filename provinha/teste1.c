#include <stdio.h>
#include <stdlib.h>  
void concatenar ( FILE *base, FILE *copiado);
void limpar();

int main ()
{
    FILE *arqv1;
    FILE *arqv2;
    FILE *arqvResultado;

    char nome [300], nomeX [300];
    printf ("Digite o nome do arquivo 1: ");
    scanf ("%[^\n]s", nome);
    limpar();

    printf ("Digite o nome do arquivo 2: ");
    scanf ("%[^\n]s", nomeX);
    limpar();

    arqv1 = fopen (nome, "r");

    if (!arqv1) {
        printf("Nao foi possivel abrir o arquivo 1!\n");
    }

    arqv2 = fopen (nomeX, "r");

    if (!arqv2) {
        printf("Nao foi possivel abrir o arquivo 2!\n");
    }

    arqvResultado = fopen ("concatenado.txt", "a");

    if (!arqvResultado) { 
        printf("Nao foi possivel abrir o arquivo 3!\n");
    }


    
    concatenar (arqvResultado, arqv1);
    concatenar (arqvResultado, arqv2);


    
    fclose (arqv1);
    fclose (arqv2);
    fclose (arqvResultado);

    return 0;
}

void limpar() {
    scanf("%*[^\n]");
    scanf("%*c");
}


void concatenar ( FILE *base, FILE *copiado)
{
    char leitor [1000];

    while (fgets (leitor, sizeof leitor, copiado) != NULL)
    {
        fputs (leitor, base);
    }
}
