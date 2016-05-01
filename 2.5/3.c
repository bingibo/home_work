#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[255];
	int b[79]={0},i=0,j=0,s;
	char c[]="0123456789QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm`~-+=!@#$%%^&*(){}[];'\"\\/,.<>";
	printf("введите произвольную строку символов:\n");
	gets(a);
	printf("символы в порядке возрастания частоты повторений\n");
	
		while (i<strlen(a))
	    {
		    while (j<89)
			{
		        if(c[j]==a[i])
				++b[j];
			    ++j;
			}
			j=0;
			++i;
		}
	i=0;
	j=0;
	
    while(i<=strlen(a))
	{
		while(j<92)
        {
            if(b[j]!=0 && b[j]==i)
		    {
		        printf("%c",c[j]);
		    }
		    ++j;
		    }
        j=0;
        ++i;
    }
	printf("\n");
	return 0;
}