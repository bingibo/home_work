#include <stdio.h>
int main()
{
    int a,b;
    printf("введите два числа через пробел \n");
    scanf("%d %d", &a, &b);
    while (a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
            		
    printf("%d \n",a);
    return 0;
}
