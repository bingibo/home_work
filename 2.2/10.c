#include <stdio.h>
int main()
{  
    printf("под базовый тип данных int отводится %zd байт\n", sizeof(int));
    printf("под базовый тип данных char отводится %zd байт\n", sizeof(char));
    printf("под базовый тип данных float отводится %zd байт\n", sizeof(float));
    printf("под базовый тип данных double отводится %zd байт\n", sizeof(double));
    printf("под базовый тип данных void отводится %zd байт\n", sizeof(void));
    return 0;

}
