#include <stdio.h> 
int main() 
{	
    int b=0;
    int c=0;
    char a[1000];
    printf("введите строку символов\n");
    scanf("%s", a);
    while  (a[c]!='\0')
    {
        if (a[c]>b)
        {
            b=a[c];
	    ++c;
        }
	else 
        ++c;
    }
    printf("%c\n",b );
    return 0;
}
   



