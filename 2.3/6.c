#include <stdio.h>
int main()
{
    int a;
    int b=0;
    printf("введите количество процентов\n");
    scanf("%d", &a);
    printf("%d%c[",a,37);
    while (b<(a/2))
    {
        printf("%c",42);
	++b;
    }
    while(b!=50)
    {
        printf("%c",46 );
	++b; 
    }
    printf("]\n");
    return 0;
}

 

			
