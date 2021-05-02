#include <stdio.h>

int maiormenor(int *a, int *b, int *c){
	int cont1, cont2, cont3;

	cont1 = *a;
	cont2 = *b;
	cont3 = *c;

	
	if(*a < *b){
        if(*a < *c){
            *a = cont1;
        }else{
            *b = cont1;
        }
	}else{
        *c = cont1;
    }

    if(*a < *c){
        if(*a < *b){
            *a = cont1;
        }else{
            *b = cont1;
        }
	}else{
        *c = cont1;
    }

	if(*b < *a){
        if(*b < *c){
            *a = cont2;
        }else{
            *b = cont2;
        }
	}else{
        *c = cont2;
    }

    if(*b < *c){
        if(*b < *a){
            *a = cont2;
        }else{
            *b = cont2;
        }
	}else{
        *c = cont2;
    }


   	if(*c < *a){
        if(*c < *b){
            *a = cont3;
        }else{
            *b = cont3;
        }
	}else{
        *c = cont3;
    }

    if(*c < *b){
        if(*c < *a){
            *a = cont3;
        }else{
            *b = cont3;
        }
	}else{
        *c = cont3;
    }
    if(cont1 == cont2 && cont1 == cont3){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    int a, b, c, resul;

	printf  ("Informe o primeiro valor: ");
		scanf("%d", &a);
	printf  ("Informe o segundo valor: ");
		scanf("%d", &b);
	printf  ("Informe o terceiro valor: ");
		scanf("%d", &c);

    resul = maiormenor(&a, &b, &c);

    printf  ("O menor valor e: %d\n", a);
    
    printf  ("O meio valor e: %d\n", b);
    
    printf  ("O maior valor e: %d\n", c);

    if(resul == 1){
        printf  ("Os valores são iguais");
    }else{
        printf  ("Os valores são diferentes");
    }

    return 0;
}
