#include <stdio.h>
#include <string.h>
int main(void)
      {
        char  string[1000];
        int out;
        printf("введите произвольную строку \n");
        scanf("%s", string);
        out=strlen(string);
        printf("Длина введденной стркои равна %d байт \n", out);
        return 0;
                                             
      }

