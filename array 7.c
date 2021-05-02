#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main () { 
int num[10], i, x, j, ja_consta; 
srand (time(NULL)); 
/* preenche vetor sem repetição */ 
for (i=0; i<10; i++) { 
num[i] = rand() % 10000 + 1; 
do { 
ja_consta = 1; 
for (j=0; j<i; j++) 
if (num[i] == num[j]) { 
num[i] = rand() % 10000 + 1; 
ja_consta = 0; 
} 
} while (ja_consta == 0); 
} 
printf("Informe um número entre 1 e 10.000: "); 
scanf("%d", &x); 
i=0; 
while ((i<10) && (num[i] != x)) 
i++; 
if (i < 10) 
printf("%d encontra-se na posição %d do vetor\n", x, i); 
else 
printf("%d esta incorreto :\n", x); 
return 0; 
}

