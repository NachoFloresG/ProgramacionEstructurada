#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	printf("Ingrese el numero que quiera calcular: \n");
	scanf("%d", &i);
	printf("%d",fibbonacci(i));
	return 0;
}
 
	int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}
