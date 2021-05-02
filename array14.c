#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int *x;
int num;
scanf("%d", &num);
x =(int *) malloc(sizeof(int) * num);

for(i=0;i<num;i++)
   scanf("%d",&x[i]);

for(i=0;i<num;i++)
   printf("\n%d",x[i]);

system("PAUSE");
}


