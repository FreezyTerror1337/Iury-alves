#include <stdio.h>

#include <ctype.h>

int main() {

   char c;

   int cont=0;

   FILE *arq;

   arq = fopen("arquivo1.txt", "r");

   if (arq == NULL)

      printf("Erro ao tentar abrir arquivo.\n");

   else {

      while ((c = fgetc(arq)) != EOF)

         if (toupper(c) == 'A' || toupper(c) == 'E' || toupper(c) == 'I' || toupper(c) == 'O' || toupper(c) == 'U')

            cont++;

      fclose(arq);

      printf("%d vogais\n", cont);

   }

   return 0;

}
