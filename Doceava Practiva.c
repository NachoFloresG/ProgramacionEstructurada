#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Ignacio Flores Gallegos 1659301

struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
	char birth[30];
	char school[30];
	char grade[30];
	char career[30];
	char gender[30];
};

int main() {
int num, condicion_nombre,i, j,num_ids=-1;
struct Alumnos  alu[100], *p_al;
p_al=alu; 
printf ("¿Cuantos alumnos desea registrar?: ");
scanf ("%d",&num);
for (i=0; i<num; i++){
		printf ("\nIngrese su ID: \n");
		scanf ("%d", &alu[i].id);
		num_ids++;
		fflush(stdin);
				do{
			for (j=0; j<num_ids; j++){
				if (alu[j+1].id==alu[j].id){
					printf ("Numero de id invalido \n");
					printf ("\nIngrese su ID: \n");
					scanf ("%d", &alu[j+1].id);
				}}}while(alu[i].id==alu[i-1].id);
				
		printf ("\nIngresa tu nombre: \n");
		scanf ("%s", &p_al->first_name);
		fflush(stdin);
		printf ("\nIngresa tu apellido: \n");
		scanf ("%s", &p_al->last_name);
		fflush(stdin);
		printf ("\nIngresa tu segundo apellido: \n");
		scanf ("%s", &p_al->sec_last_name);
		fflush(stdin);
		printf ("\nIngresa tu cumpleaños: \n");
		scanf ("%s", &p_al->birth);
		fflush(stdin);
		printf ("\nIngresa tu escuela: \n");
		scanf ("%s", &p_al->school);
		fflush(stdin);
		printf ("\nIngresa tu semestre: \n");
		scanf ("%s", &p_al->grade);
		fflush(stdin);
		printf ("\nIngresa tu carrera: \n");
		scanf ("%s", &p_al->career);
		fflush(stdin);
		printf ("\nIngresa tu genero: \n");
		scanf ("%s", &p_al->gender);
		fflush(stdin);
		p_al++;
		}
		
p_al=alu; 
for (i=0; i<num; i++){
	printf("%d %10s %10s %10s %10s %10s %10s %10s %10s\n",p_al->id,p_al->first_name,p_al->last_name ,p_al->sec_last_name,p_al->birth,p_al->school,p_al->grade,p_al->career,p_al->gender);
	p_al++;
}
			
	
	return 0;
	}
