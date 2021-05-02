#include<stdio.h>
#include<stdlib.h>
int main() {

    char letras[2];

    FILE *arq;

    arq = fopen ("D:\files","w");
    if (arq == NULL){
        printf("Erro ao abrir");
        system("pause");
        exit(1);
    }
    printf("Informe um caratere \n");
    scanf("%s", &letras[0]);

    while (letras[0] != '0'){
    	printf("\n%s\n", letras);
    	fputc(letras[0], arq);
    	fputc('\n', arq);
    	printf("Informe um caractere\n");
    	scanf("%s", &letras[0]);
}
    printf("\nDados gravado\n");
    	fclose(arq);

    arq = fopen ("D:\files","r");
    if (arq == NULL){
        printf("Erro ao abrir\n");
        system("pause");
        exit(1);
    }
    printf("\ncaracteres armazenados:\n");
    while (!feof(arq)){
        char *result = fgets(letras,2,arq);
        printf("%s",letras);
    }
    system("pause");
    return 0;
}
