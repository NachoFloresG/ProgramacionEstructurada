#include <stdio.h>
//Ignacio Flores Gallegos 1659301

int main() {
	float a=0;
	char b=0;
	float c=0;
	float d=0;

	
	printf("Ingrese  la operacion deseada con dos numeros:\n");
	scanf("%f %c %f",&a,&b,&c);
	
    switch(b){
    	case'+':
    	d=a+c;
    	printf("%f",d);
    	break;
    	
    	case'-':
    	d=a-c;
    	printf("%f",d);
    	break;
    	
    	case'*':
    	d=a*c;
    	printf("%f",d);
    	break;
    	
    	case'/':
    	d=a/c;
    	printf("%f",d);
    	break;
    	
    	default: printf("Error");
	}
	
	

	return 0;
}

