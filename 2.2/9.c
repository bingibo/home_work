#include <stdio.h>
int main()
{
    long long int a,b;
    double c,d,e;
    printf("введите число\n");
    scanf("%lld", &a);
    while (a>0)
    {
        b=a-((a/10)*10);

        c=c+b;
    	a=a/10;
        ++e;
    }
    d=c/e;
    
   printf("количество цифр =%f, сумма = %f, среднее значение = %.3f\n",e,c,d);
   return 0;
}
