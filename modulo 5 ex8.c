#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct pessoa {
    char nome[50];
    int idade;
    char sexo;
    unsigned long int cpf;
    char dataNas[15];

};

typedef struct funcionario {
    char cep[15];
    char cargo[30];
    float salario;
    struct pessoa Pessoa;

} Funcionario;

int main() {
    setlocale(LC_ALL, "portuguese");
    FILE *arq;
    arq = fopen("arquivo.txt", "a");
    if (arq == NULL) {
        printf("Erro na gravação de dados\n\n");
        system("pause");
        exit(1);
    }
    int n, i;
    printf("Digite quantos funcionarios gostaria de inserir: ");
    scanf("%d", &n);
    Funcionario x[n];
    for (i = 0; i < n; i++) {
        getchar();
        printf("Nome: ");
        fgets(x[i].Pessoa.nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &x[i].Pessoa.idade);
        printf("Sexo(F/M): ");
        scanf("%s", &x[i].Pessoa.sexo);
        printf("CPF: ");
        scanf("%d", &x[i].Pessoa.cpf);
        printf("DataNascimento (ddmmaaa):");
        scanf("%s", &x[i].Pessoa.dataNas);
        printf("CEP: (00000000): ");
        scanf("%s", &x[i].cep);
        printf("Cargo: ");
        scanf("%s", &x[i].cargo);
        printf("Salário: ");
        scanf("%f", &x[i].salario);

    }
    printf("\n----DADOS---\n");

    for (i = 0; i < n; i++) {
        printf("Nome: %s", x[i].Pessoa.nome);
        printf("Idade: %d", x[i].Pessoa.idade);
        printf("\nSexo: %c", toupper(x[i].Pessoa.sexo));
        printf("\nCPF: %ld", x[i].Pessoa.cpf);
        printf("\nDataNascimento: %s", x[i].Pessoa.dataNas);
        printf("\nCEP: %s", x[i].cep);
        printf("\nCargo: %s", x[i].cargo);
        printf("\nSalário: %.2f\n", x[i].salario);
        printf("------------------------------\n");
    }
 
    for (i = 0; i < n; i++) {
        fprintf(arq, x[i].Pessoa.nome);
        fprintf(arq, " ; ");
    } 
    for (i = 0; i <n; i++){
    fprintf(arq, " ", x[i].Pessoa.idade);}  
  printf("\n DADOS GRAVADOS EM ARQUIVOS \n ");
    /*
    for (i = 0; i <x[i].Pessoa.idade; i++)
    fprintf(arq, " ", x[i].Pessoa.idade);  
    for (i = 0; i <strlen(x[i].Pessoa.sexo); i++)
    fprintf(arq,  x[i].Pessoa.sexo);
    for (i = 0; i <strlen(x[i].Pessoa.cpf); i++)
    fprintf(arq, " ",x[i].Pessoa.cpf);
    for (i = 0; i <strlen(x[i].Pessoa.dataNas); i++)
    fprintf(arq, x[i].Pessoa.dataNas );
    for (i = 0; i <strlen(x[i].cep); i++)
    fprintf(arq,x[i].cep );
    for (i = 0; i <strlen(x[i].cargo); i++)
    fprintf(arq,  x[i].cargo);
    for (i = 0; i <10; i++)
    fprintf(arq, "valor: R$", x[i].salario);
    //*/
    fclose(arq);
    return 0;
}
