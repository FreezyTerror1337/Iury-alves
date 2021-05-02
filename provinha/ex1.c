#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f1, *f2, *f3;
	
	f1 = fopen ("arq1.txt","r");
		if (f1 == NULL) {
        printf("Error");
        system("pause");
        exit(1);
    		}
    		
    f2 = fopen ("arq2.txt","r");
		if (f2 == NULL) {
        printf("Error");
        system("pause");
        exit(1);
    		}
        f3 = fopen("arq3.txt","w");
    	if (f3 == NULL) {
    		printf("Error");
    		system("pause");
    		exit(1);
    	
		}
		f3 = f1;
		fclose (f3);
    		
    f3 = fopen("arq3.txt","a");
    	if (f3 == NULL) {
    		printf("Error");
    		system("pause");
    		 exit(1);
		}
		f3 = f2;

    fclose (f1);
    fclose (f2);
	fclose (f3);		
	}
