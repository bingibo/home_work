#include <stdio.h>
int main()
{ 
    int a, b, c, d, e;
    float f;
    printf("введите два числа через enter \n" );
    scanf("%d", &a);
    scanf("%d", &b);

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf(" сумма %d, разность %d, произведение %d, частное %.2f\n" ,c,d,e,f );

    return 0;

}
