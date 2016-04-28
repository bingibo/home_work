#include <stdio.h>
#define ab(a,b,c) c=(a>b)?a:b ; printf("%d\n",c )
long int random(long int x0);
int main()
{    
	int a,c,d,k;
	int e=1;
	printf("введите количество пар чисел\n");
	scanf("%d",&a);
	a=a*2;
	while(e<a)
	{
		c=random(a);
		d=random(a+1);
		printf("из чисел %4d и %3d ,большим являеется ",c,d);
		ab(c,d,k);
        a=a-2;
    } 
}


long int random(long int x0)
{
    int d=0;
    int m=173;
    long long  a,c;
    c=1;
    a=173554928888 ;
    x0=((a*x0+c) %m);
return x0;
}	









