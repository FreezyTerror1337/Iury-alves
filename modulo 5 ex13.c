#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 50


// Definindo o tipo T_pessoa com a struct pessoa
typedef struct pessoa {
   
    // Atributos de cada T_pessoa
    char nome[MAX], end[MAX], cidade[MAX], email[MAX];
    int cep[7], ano, mes, dia;
} T_pessoa;

// Funcao que cadastra uma pessoa
// Recebe o T_pessoa pessoa que ela vai preencher
void CadastrarPessoa(T_pessoa *pessoa) {
   
    printf("\n===========================================================================");
    printf("\n                           CADASTRO PESSOA                                 ");
    printf("\n===========================================================================");
   
    // Recebendo os dados e armazenando em T_pessoa pessoa
    printf("\n Digite o nome: (somente texto) ");
    fgets((*pessoa).nome, MAX, stdin);
    printf("\n Digite o endereço: (rua, numero e bairro) ");
    fgets((*pessoa).end, MAX, stdin);
    printf("\n Digite a cidade: (somente texto) ");
    fgets((*pessoa).cidade, MAX, stdin);
    printf("\n Digite o e-mail: (exemplo@exemplo.com) ");
    fgets((*pessoa).email, MAX, stdin);
    printf("\n Digite o ano de nascimento: (somente 4 numeros) ");
    scanf("%d", &(*pessoa).ano);
    printf("\n Digite o mes de nascimento: (somente 2 numeros) ");
    scanf("%d", &(*pessoa).mes);
    printf("\n Digite o dia de nascimento: (somente 2 numeros) ");
    scanf("%d", &(*pessoa).dia);
    printf("\n Digite o cep (somente 7 numeros): ");
    scanf("%d", &(*pessoa).cep);
   
}

int ValidarData(int dia, int mes, int ano)
    {
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2017))
        {
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0))
            {
                return 1;
            }
            if (dia <= 28 && mes == 2)
            {
                return 1;
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
            {
                return 1;
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12))
            {
                return 1;
            }
            else
            {
                return 0;
            }
      }
       else
           {
                return 0;
           }
}

main() {
    //Definição de linguagem para aparecer na tela (Acentos e afins)
    setlocale(LC_ALL, "portuguese");
   
    // variavel do tipo pessoa que sera salva
    T_pessoa pessoa;
   
    // cadastrando pessoa
    CadastrarPessoa(&pessoa);
   
    // limpando tela
    system("cls");
   
    int verificacao, verificacaoEmail;
   
    verificacao = ValidarData(pessoa.dia, pessoa.mes, pessoa.ano);
   
    if (verificacao == 1)  {
        if (verificacaoEmail == 1) {
                   
            // Imprimindo resultados em T_pessoa pessoa
            printf("\n=================================================================");
            printf("\n                           DADOS INFORMADOS                       ");
            printf("\n=================================================================");
            printf("\nNome............: %s", pessoa.nome);
            printf("\nEndereço........: %s", pessoa.end);
            printf("\nData nascimento.: %d/%d/%d", pessoa.dia, pessoa.mes, pessoa.ano);
            printf("\n\nCidade..........: %s", pessoa.cidade);
            printf("\nE-mail..........: %s", pessoa.email);
            printf("\nCep.............: %d", pessoa.cep);
            printf("\n\n");
        } else {
            printf("E-mail invalido");
        }
    } else {
   
    printf("Data nascimento invalida\n");
   
       
    }
   
    system("pause");
    return 0;
}
