#include <stdio.h>
#include <math.h>
int main()
{ 
    float a,b,c,d;
    float x1,x2;
    printf("введите коэфициенты(через пробел) квадртного уравнение \n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    x1=(-(b)+sqrt(d))/(2*a);
    x2=(-(b)-sqrt(d))/(2*a);
    if (d<0)
    {
        printf("дискриминант < 0\n");
    }
    else 
        printf("x1=%.3f; x2=%.3f;\n",x1,x2 );
    return 0;
}
