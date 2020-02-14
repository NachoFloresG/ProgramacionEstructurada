#include <stdio.h>

// Ignacio Flores Gallegos 1659301
int main() {
char c;
printf("Ingrese un caracter:\n");
c=getchar();
int a = (int)c;
if(48<=a&&a<=57){
printf("Numero");
}else{
if (90>=a&&a>=65){
printf("Mayuscula");
}else{
if (122>=a&&a>=97){
printf("Minuscula");}
else{
printf("Simbolo");
}
}
}

return 0;
}
