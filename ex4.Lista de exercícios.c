#include <stdio.h>

int main (){
    int a = 5, b = 10;
    int *p1, *p2;
    int **pd;

	p1 = &a;
	p2 = &b;
    pd = &p1;

    **pd = 2 * *p1;
    
    printf("Valor de a : %d\n", **pd);
    
    **pd = 2 * *p2;
    
    printf("Valor de b : %d\n", **pd);

    return 0;
}
