#include <stdio.h>
#include <stdlib.h>
//Ignacio Flores Gallegos 1659301


int main() {
	
	int mat[3][3],mat2[3][3],i,j,escalar;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("Ingrese los elementos de la matriz de 3x3:");
		scanf("%d",&mat[i][j]);
		}
	}
	printf("\nIngrese el escalar a multiplicar:");
	scanf("%d",&escalar);
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		mat2[i][j]=escalar*mat[i][j];
		}
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
