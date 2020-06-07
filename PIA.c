#include <stdio.h>
#include <stdlib.h>
Hola
struct usuario{
	int idUsuario;
	char sUsuario;
	int sPassword;
	char sNombre;
	int nEstatus;
	int nTipo; 
};
typedef struct usuario US;
int validarUs(US P);
FILE *pt;
int main() {
US u;
int op,op2,hist,admin=0,caj=0;
char *archUsuario="Usuarios.txt";
if((pt=fopen(archUsuario,"r"))==NULL){
		puts("ERROR");
		return 0;
	}

printf("\t\t   Bienvenidos\n \t\tSupermercado FCFM\n\n");
printf("\tUsuario: ");
scanf("%s",&u.sUsuario);
printf("\n\tContrase%ca: ",164);
scanf("%d",&u.sPassword);
printf("   %d",validarUs(u));
fclose(pt);

if(admin==1){
	do{
		/*system("cls");*/
		printf("Buen d%ca **Nombre del usuario* \n\n",161);
		printf("\tMen%c Pricipal\n\n",163);
		printf(" 1. Registro de Clientes\n 2. Registro de Productos\n 3. Registro Tipo de Producto\n 4. Pedido/Venta\n 5. Historial Pedido/Venta\n 6. Reporte Inventario\n 7. Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1: {
						system("cls");
						printf("\tRegistro de Clientes\n");
						printf(" 1. Alta\n 2. Baja\n 3. Consulta\n 4. Regresar al Men%c Principal\n",163);	
					break;	}
			case 2: {
						system("cls");
						printf("\tRegistro de Productos\n");
						printf(" 1. Alta\n 2. Baja\n 3. Consulta\n 4. Resurtido\n 5. Regresar al Men%c Principal\n",163);
					break;	}
			case 3:	{
						system("cls");
						printf("\tRegistro de Tipo de Producto\n");
						printf(" 1. Alta\n 2. Baja\n 3. Consulta\n 4. Regresar al Men%c Principal\n",163);
					break;	}
			case 4: {
						system("cls");
						printf("\tRegistro de Pedido/Venta\n");
						printf(" 1. Alta\n 2. Cancelar (Solo aplica a Pedido)\n 3. Consulta\n 4. Env%co (Solo aplica a Pedido)\n 5. Regresar al Men%c Principal\n",161,163);
					break;	}
			case 5: {
						system("cls");
						printf(" Ingrese 1. Pedidos \t2. Ventas\n");
						scanf("%d",&hist);
						if(hist==1){
							system("cls");
							printf("\t\t\tHISTORIAL PEDIDO\n");
							printf("\t\t\t\t\t\t FECHA:  \n");
							printf("CVE PEDIDO: \t\t FECHA ENTREGA: \t\t ENVIADO: \n");
							printf("CVE CLIENTE: \t\t NOMBRE CLIENTE:\n");
							printf("CVE PRODUCTO \t DESCRIPCION \t\t\t CANTIDAD\t PRECIO\t TOTAL\n\n\n");

							printf("\t\t\t\t\t\t\tSUBTOTAL ");
							printf("\t\t\t\t\t\t\t\t\tIVA ");
							printf("\t\t\t\t\t\t\t\t\t\tTOTAL");
						}else if(hist==2){
								system("cls");
							printf("\t\t\tHISTORIAL DE VENTAS\n");
							printf("\t\t\t\t\t\t FECHA:  \n");
							printf("CVE VENTA:\n\n");
							printf("CVE PRODUCTO \t DESCRIPCION \t\t\t CANTIDAD\t PRECIO\t TOTAL\n\n\n");

							printf("\t\t\t\t\t\t\tSUBTOTAL ");
							printf("\t\t\t\t\t\t\t\t\tIVA ");
							printf("\t\t\t\t\t\t\t\t\t\tTOTAL");
							}else {printf("N%cmero no aceptado",163);}
					break;	}
	
		}
	}while(op>7);}

	return 0;

}

/*				FUNCIONES				*/

int validarUs(US P){
	US arg;
	int admin=0;
		if(fread(&arg,sizeof (US),1,pt)>0)
		if(strncmp(P.sUsuario,arg.sUsuario)==0){
			admin++;
		}
	return admin;
}

