#include <stdio.h>
int main()
{  int s1,s2,s3,s4,s5;
   s1=sizeof(int);
   s2=sizeof(char);
   s3=sizeof(float);
   s4=sizeof(double);
   s5=sizeof(void);
    printf("под базовый тип данных int отводится %d байт\n", s1);
    printf("под базовый тип данных char отводится %d байт\n", s2);
    printf("под базовый тип данных float отводится %d байт\n", s3);
    printf("под базовый тип данных double отводится %d байт\n", s4);
    printf("под базовый тип данных void отводится %d байт\n", s5);
    return 0;

}
