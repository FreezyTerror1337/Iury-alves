tes#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    char c, str[30];
    int i = 0, contv, contc;
    printf("\n\n Entre com um nome para o arquivo:\n");
    gets(str);



    if (!(p = fopen(str,"r"))) 
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
    }

    while (!feof(p)) /* Enquanto não se chegar no final do arquivo */
    {
        c = getc(p); /* Le um caracter no arquivo */
        if (c =='a'||c =='e'||c =='i'||c =='o'||c =='u'){
			contv++;
		}else{
			contc++;
		}
    }
    fclose(p); /* Fecha o arquivo */
    printf("\nO numero de vogais do arquivo %s e' igual a %d ", str, contv);
    printf("\nO numero de consoantes do arquivo %s e' igual a %d ", str, contc);
}
