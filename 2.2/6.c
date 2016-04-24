#include <stdio.h>
int main()
{ 
    long long int  a,b;
    long long int  c=1; 
    printf("введите число для вычисления факториала, не превышающее 20 \n");
    scanf("%lld", &a);
    b=a;
    while (a>1)
    {
        c=c*a*(a-1);
        a=a-2;
    }
    printf("факториал %lld равен %lld \n",b, c);
    return 0;
}
