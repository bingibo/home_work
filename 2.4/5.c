#include <stdio.h>
float veshestv(float a,float b,float c,float d);
float mnim(float a,float b,float c,float d);
int main()
{
	float a,b,c,d;
	printf("введите коэфициенты первого комплексного сопротивления через пробел\n");
	scanf("%f %f", &a,&b);
	printf("введите коэфициенты второго комплексного сопротивления через пробел\n");
	scanf("%f %f", &c,&d);
	printf("комплексное сопротивление =  %.3f+%.3fi\n", veshestv(a,b,c,d),mnim(a,b,c,d));
	return 0;



}
float veshestv(float a,float b,float c,float d)
{ 
    
    float r;
    r=((a*c-b*d)*(a+c)-(b*c+a*d)*(b+d))/((a+c)*(a+c)+(b+d)*(b+d));
    return r;   

}
float mnim(float a,float b,float c,float d)
{
	float r;
	r=((b*c+a*d)*(a+c)+(a*c-b*d)*(b+d))/((a+c)*(a+c)+(b+d)*(b+d));
	return r;

}
