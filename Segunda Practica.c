#include <stdio.h>
//Ignacio Flores Gallegos 1659301

int main() {
int a=1 ,b=2 ,c=3 ,d=(1+2)*3, res;
float e=5.5, f=6.9 ,g=8.2 ,h=(5.5+6.9)*8.2;

//operaciones con enteros
printf("(%d+%d)*%d=%d \n",a,b,c,d);
printf("%d/%d=%d \n",d,c,d/c);
printf("%d/2=R%d \n",c,c%2);
printf("++1=%d \n",++a);
printf("--2=%d \n\n",--b);

//operaciones con flotantes
printf("(%.2f+%.2f)*%.2f=%.2f \n",e,f,g,h);
printf("%.2f/%.2f=%.2f \n",e,f,e/f);
printf("++%.2f=%.2f \n",--e,++e);
printf("--%.2f=%.2f \n\n",++f,--f);

//caracteres
char nombre[]= "Ignacio";
printf("%s\n\n",nombre);

//Boleano
res=(3<5)+(a == b);
printf("(3<5)+(a==b)=%d\n",res);
res=((8>1)&&(7<9));
printf("8>1 && 7<9=%d",res);
}
