#include <stdio.h>
int main()
{
    int d=0;
    int m=173;
    long long int x0,e;
    long long  a,c;
    printf("Ведите длинну последовательности псевдослучайного числа\n");
    scanf("%lld", &x0);
    c=1;
    a=173554928 ;
    e=x0;
    while  (d<e)
    {
        x0=((a*x0+c) %m);
	printf("%lld ", x0);
        ++d;
		
    }
    printf("\n");
    return 0;
}	








