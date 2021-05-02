#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m[] [2], int n){
	int i, j;
	for (i=0; i<n; j++)
		printf("%d \n", m[i] [j]);
}
int main(){
	int mat [3][2] = {{1,2}, {3,4}, {5,6}};
	imprime_matriz(mat, 3);
}
