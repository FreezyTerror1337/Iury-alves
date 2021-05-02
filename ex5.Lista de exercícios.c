#include<stdio.h>
#include<stdlib.h>
int main(){
	float X, Y, *p, **pd;
	int i;
	printf("digite um numero: ");
	scanf("%f", &X);
	printf("digite um numero: ");
	scanf("%f", &Y);
	
    pd = (float **) malloc(2 * sizeof(float ));
    for ( i = 0; i < 2; i++)
    {
        pd[i] = (float*) calloc( 2, sizeof(float));
    }
     pd[0][0] = X * 4;
     pd[0][1] = Y * 4;
    
	printf("o quadruplo de %.1f eh %.1f",  pd[0][0], pd[0][1]);
	
}
