#include <stdio.h>
#include <math.h>
int main()
{ 
 	  
    float  a,b,c,f;
    char d;
    int e=1;
    printf("введите 2 числа и операцию между ними\n");
    scanf("%f%c%f", &a,&d,&c);
    if (d==43)
    {
        b=a+c;	
    }
    if  (d==45)
    {
        b=a-c;	
    }	
    if  (d==42)
    {
        b=a*c;	
    }
    if  (d==47)
    {
        b=a/c;	
    }	
    if  (d==37)
    {
        b=(a/100)*c;	
    }	
    if (d==94)
    { 
        b=pow(a,c); 	
    }
    

    printf("%.2f\n",b );
    return 0;
}
