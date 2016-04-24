#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int c,b;
        c=0;
	printf("введите набор букв, регистр которых хотите увеличить\n");
	scanf("%s", a);
	b=strlen(a);
	while (c<b)
	{		
	    a[c]=a[c]-32;
            c++;
	}
        printf("%s\n", a );
        return 0;
}
