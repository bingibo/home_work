#include <stdio.h>
#include <math.h>
int main()
{      
    int x,x1,y,y1,z,z1;
    int s1,s2,s3;
    printf("введите координаты вершин через пробелы\n");
    scanf("%d %d %d %d %d %d",&x,&x1,&y,&y1,&z,&z1);
    s1=((x1-x)^2)+((y1-y)^2);
    s2=((x1-x)^2)+((z1-z)^2);
    s3=((y1-y)^2)+((z1-z)^2);
    if (s1==s2+s3 || s2==s1+s3 || s3==s1+s2)
        printf("этот треугольник прямоугольный\n");
    else 
        printf("этот треугольник не прямоугольный\n");
    return 0;
}
