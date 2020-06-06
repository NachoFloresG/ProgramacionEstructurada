#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ignacio Flores Gallegos 1659301

int main() {
	int i,j;
	char alumnos[10][9][100];
	for(i=0;i<10;i++){
		printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%s",&alumnos[i][0]);
		printf("\nIngrese el nombre del estudiante  ");
		scanf("%s",&alumnos[i][1]);
		printf("\nIngrese el primer apellido del estudiante  ");
		scanf("%s",&alumnos[i][2]);
		printf("\nIngrese el segundo apellido del estudiante  ");
		scanf("%s",&alumnos[i][3]);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa  ");
		scanf("%s",&alumnos[i][4]);
		printf("\nIngrese el nombre de la facultad del estudiante  ");
		scanf("%s",&alumnos[i][5]);
		printf("\nIngrese el semestre del estudiante  ");
		scanf("%s",&alumnos[i][6]);
		printf("\nIngrese la carrera del estudiante  ");
		scanf("%s",&alumnos[i][7]);
		printf("\nIngrese el genero del estudiante F-femenino M-masculino  ");
		scanf("%s",&alumnos[i][8]);
		system("cls");
	}
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
		printf("%10s ",alumnos[i][j]);
		}
	printf("\n");
	}
	return 0;
	}
