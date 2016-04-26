#include <stdio.h>
long long fl(int);
int main()
{
    long long int a,b=1,c=0,d=1,e,k,l=0,n=1,m=0;
    printf("введите количество строк треугольника\n");
    scanf("%lld",&a);
    e=a;
    while(m<(e+3))
    {
        printf("  ");
       	++m;
    } 
    m=0;
    e=a;
    printf("1 \n");
    while (b<=a)
    {
        k=a-(a-n); 
        while(c<=(e))
	{
	    printf("  ");
	    ++c;
        }
		
	while(l<=k)
        {
            printf("%3lld ",fl(n)/(fl(l)*fl(n-l)));
            ++l;
       }
        ++b;
        ++n;
        l=0;
        --e;
        c=0;
        printf("\n");}
}



long long int fl(int a)
{
    long long int  c=1;
    while (a>1)
    {
        c=c*a*(a-1);
        a=a-2;
    }
return c;
}



     
    
    
    
