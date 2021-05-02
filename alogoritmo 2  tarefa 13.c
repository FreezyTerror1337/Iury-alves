#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char fone[12], user[11];
	
	
FILE *files;

files = fopen ("D:\\files", "w");
if (files == NULL){
	printf("erro!");
	system("pause");
	exit(1);
}
printf("Informe um nome: ");
scanf("%s", user);
int n;
while (user[0] != '0'){
	for(n=0; n<strlen(user); n++){
		fputc(user[n], files);
	}
}
printf("informe o numero");
scanf("%s", fone);
for(n=0; n<strlen(fone); n++){
	putc(fone[n], files);
}
fputc(' ', files);
printf("informe um nome");
scanf("%s", user);

printf("dados gravados");
fclose(files);
system("pause");
return 0;


}
