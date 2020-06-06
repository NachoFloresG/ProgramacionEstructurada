#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
	char birth_date[10];
	char school[30];
	char grade[30];
	char career[30];
	char gender[30];
	
};

int main() {
int num, condicion_nombre,i, j,num_ids=-1;

struct Alumnos  alu[100];
printf ("Numero de alumnos: ");
scanf ("%d",&num);
for (i=0; i<num; i++){
		printf ("\nIngrese su id: \n");
		scanf ("%d", &alu[i].id);
		num_ids++;
		fflush(stdin);
				do{
			for (j=0; j<num_ids; j++){
				if (alu[j+1].id==alu[j].id){
					printf ("Numero de id invalido\n");
					printf ("\nIngrese su id: \n");
					scanf ("%d", &alu[j+1].id);
				}}}while(alu[i].id==alu[i-1].id);
				
		printf ("\nIngrese su nombre: \n");
		scanf ("%s", &alu[i].first_name);
		fflush(stdin);
		printf ("\nIngrese su apellido: \n");
		scanf ("%s", &alu[i].last_name);
		fflush(stdin);
		printf ("\nIngrese su segundo apellido: \n");
		scanf ("%s", &alu[i].sec_last_name);
		fflush(stdin);
		printf ("\nIngrese su fecha de nacimiento DDMMAAAA: \n");
		scanf ("%s", &alu[i].birth_date);
		fflush(stdin);
		printf ("\nIngrese su escuela: \n");
		scanf ("%s", &alu[i].school);
		fflush(stdin);
		printf ("\nIngrese su calificacion: \n");
		scanf ("%s", &alu[i].grade);
		fflush(stdin);
		printf ("\nIngrese su carrera: \n");
		scanf ("%s", &alu[i].career);
		fflush(stdin);
		printf ("\nIngrese su genero: \n");
		scanf ("%s", &alu[i].gender);
		}
		fflush(stdin);
		
		
for (i=0; i<num; i++){
	printf("%d %10s %10s %10s %10s %10s %10s %10s %10s\n",alu[i].id ,alu[i].first_name ,alu[i].last_name ,alu[i].sec_last_name,alu[i].birth_date,alu[i].school,alu[i].grade,alu[i].career,alu[i].gender);
}
			
	
	return 0;
	}
