#include <stdio.h>
void swap(char *a, char *b);
void invert(char *a, char *m, int i);
int main()
{
    char a[1000];
    char b[1000];
    char m[1000];
    int i;
    printf("введите строку которую хотите копировать и инвертировать\n");
    gets(a);
    for (i=0;a[i];i++)
        {;}
        --i;
    printf("%d\n",i);
    swap(&a[0],&b[0]);
    printf("ваша скопировананя строка %s\n",&b[0] );
    invert(&a[0],&m[0],i);
    printf("ваша инвертированная строка %s\n", &m[0]);
    return 0;
}
void swap(char *a, char *b)
{
    while (*a!='\0')
    {
        *b= *a;
        ++a;
        ++b;
    }
}
void invert(char *a, char *m,int i)
{   
    int c=0;
    while (a[c])
    {
    *m=*(a+i);
    --i;
    ++c;
    ++m;
    }
}



