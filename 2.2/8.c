#include <stdio.h>
int main()
{
    int v0,g,a;
    float t,y,sin1;
    g=9.8;
    printf("введите начальную скорость камня в м/с\n");
    scanf("%d", &v0);
    printf("введите угол, под которым бросают камень в градусах\n");
    scanf("%d", &a);
    y=a*3.141598/180;
    sin1=y-((y*y*y)/6)+((y*y*y*y*y)/120)-((y*y*y*y*y*y*y)/5040)+((y*y*y*y*y*y*y*y*y)/362880);
    t=(2*v0*sin1)/g;
    printf("время полёта камня прошенного под углом %d градусов к горизонту с начальной скоростью %dм/с = %.2f секунд(ы)\n", a,v0,t );
    return 0;
}