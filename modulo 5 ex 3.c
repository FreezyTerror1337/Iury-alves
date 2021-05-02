#include<stdio.h>
#include<string.h>

typedef struct {
    char nome[900],
         curso[900];
    int  num_mat;
} Estudante;

void receber(Estudante aluno[], int tam) {
    int i;
    for (i=0;i<tam;i++) {
        printf("Nome: ");
        fflush(stdin);
        fgets(aluno[i].nome,900,stdin);
        printf("Curso: ");
        fflush(stdin);
        fgets(aluno[i].curso,900,stdin);
        printf("Num matricula: ");
        scanf("%d",&aluno[i].num_mat);
    }
}

void mostrar(Estudante aluno[], int tam) {
    int i;
    for (i=0;i<tam;i++) {
        printf("Nome: %s", aluno[i].nome);
        printf("Curso: %s",aluno[i].curso);
        printf("Num matricula: %d ",aluno[i].num_mat);
    }

}
int main () {
    #define MAX 5
    Estudante aluno[MAX];
    
    receber(aluno,MAX);
    mostrar(aluno,MAX);
    return 0;
}
