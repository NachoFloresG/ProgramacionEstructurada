#include <stdio.h>
//Ignacio Flores Gallegos 1659301

int main() {
	int num=0, i=0, suma=0, prom=0;
	
	while(num >=  0){
		printf("Ingrese sus numeros e ingrese -1 para terminar:");
		scanf("%d",&num);
		suma = suma+num;
		i++;
	}
	i=i-1;
	suma=suma+1;
	prom=suma/i;
	printf("La suma de los numero es:%d\n",suma); 
	printf("El pomedio es:%d",prom);
	return 0;
}
