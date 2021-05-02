#include<stdio.h>
#include<stdlib.h>
//essa foi hardcore em marcos, pega leve
int main() {

    FILE *arquivo_a , *arquivo_b;

    arquivo_a  = fopen ("D:\arquivo_a .txt","r");
    arquivo_b = fopen ("D:\arquivo_b.txt","w+");
    if (arquivo_a  == NULL ||arquivo_a  == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    char c = fgetc(arquivo_a );
    while (c != EOF){
        fputc(toupper(c), arquivo_b);
        c = fgetc(arquivo_a );
    }
    fclose(arquivo_a );
    fclose(arquivo_b);
    printf("Conversão realizada\n");
    system("pause");
    return 0;
}
