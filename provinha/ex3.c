#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, i, n;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
    
    v = (int *)malloc(n * sizeof(int));
    printf("Digite os valores do vetor:\n");
    
    for (i = 0; i < n; ++i) {
        scanf ("%d", &v[i]);
     
    }
    
    printf("\nVetor digitado:\n");
    for (i = 0; i < n; ++i) {
        printf("\n [%d] ", v[i]);
    }
    free(v);
    return 0;
}
