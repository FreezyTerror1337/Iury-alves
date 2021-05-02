#include <stdio.h>

int main (){
    int a = 5, *p1;
    float b = 10, *p2;
    double c = 20, *p3;

	p1 = &a;
	p2 = &b;
	p3 = &c;

	printf  ("O valor antes de alterar: %d\n", a);
	
	printf  ("O valor b antes de alterar: %.2f\n", b);
	
	printf  ("O valor c antes de alterar: %.2lf\n\n", c);

	*p1 = 10;
	
	*p2 = 20;
	
	*p3 = 30;

	printf  ("O valor a depois de alterar: %d\n", a); 
	
	printf  ("O valor  b depois de alterar: %.2f\n", b);
	
	printf  ("O valor  c depois de alterar: %.2lf\n", c);

    return 0;
}
