#include <stdio.h>
char swap(char *a, char *b);
int main()
{
    char a[1000];
    char b[1000]={0};
    int i;
    printf("введите строку которую хотите копировать\n");
    gets(a);
    swap(&a[0],&b[0]);
    printf("ваша скопированная строка %s\n",&b[0] );
    return 0;
}
char swap(char *a, char *b)
{
    while (*a!='\0')
    {
        *b= *a;
         ++a;
	 ++b;
    }
    return 0;
}
