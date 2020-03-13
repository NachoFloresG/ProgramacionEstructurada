#include <stdio.h>
//Ignacio Flores Gallegos 1659301

int main() {
	int num,n,i,mult;
	printf("Ingresar su numero de base:\n");
	scanf("%d",&num);
	printf("Ingrese los multiplos a generar:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		mult=num*i;
		printf("%d\n",mult);
	}
	return 0;
}
