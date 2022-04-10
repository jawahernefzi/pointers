#include<stdio.h>
void echange (int *x,int*y)
{
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp;
}
int main(){
	int a=1;
	int b=2;
	printf("a=%d, b=%d\n",a,b);
	echange(&a,&b);
	printf("a=%d, b=%d\n",a,b);
	return 0;
}
	

