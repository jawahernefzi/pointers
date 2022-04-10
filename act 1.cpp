#include <stdio.h>
int main() {
	/*int x=5;
	printf("la valeur de x est %d\n",x);
	printf("l adresse de x est %x\n",&x);
	
	return 0; */
	
	int x=5;
	int *y=&x;
	printf("la valeur de x est %d\n",x);
	printf("la valeur de y est %d\n",*y);
	printf("l'adresse de x est %x\n",&x);
	printf("l'adresse de y est %x\n",y);
	
	return 0;
	//helllo world
	
}
