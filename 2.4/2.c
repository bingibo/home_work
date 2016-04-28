#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{ 
 	  
    float  a,b,c,f;
    char d;
    int e=1;
    printf("введите 2 числа и операцию между ними\n");
    scanf("%f%c%f", &a,&d,&c);
     if (d==43) 
       b=a+c;  
     else if  (d==45)
       b=a-c;   
     else if  (d==42)
       b=a*c;  
     else if  (d==47)
       assert(c!=0);
       b=a/c;   
      if  (d==37)
       b=(a/100)*c;    
     else if (d==94)
       b=pow(a,c);     
    
     	
    
    

    printf("%.2f\n",b );
    return 0;
}
