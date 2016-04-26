#include <stdio.h>
int main()
{
    int b,c=0;
    char a[1000];
    printf("введите строку\n");
    scanf("%s", a);
    while  (a[c]!='\0')
    {
        b=a[c];
        ++c;
        if(a[c]!=b)
        printf("%c",b );
    }
   printf("\n");
}
