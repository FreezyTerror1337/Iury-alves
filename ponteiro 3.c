#include <stdio.h>

int main ()
{
  int x, y;

    printf("Digite um numero: ");
        scanf("%i", &x);
    printf("Digite mais um numero: ");
        scanf("%i", &y);

    if(&x > &y){
        printf(" x tem o maior endereco de memoria\n");
        return;
    }
    printf("y tem o maior endereco de memoria\n");

} 
