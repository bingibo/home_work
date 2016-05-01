#include <stdio.h>
float Hue(float r,float g,float b,float min, float max);
float Saturation(float max,float min);

int main()
{ 
	float  R,G,B;
	float r,g,b;
    int H,S,V;
    float h,s,v;
    float max,min;
    
    printf("введите значение RGB\n");
    scanf("%f %f %f",&R,&G,&B);
    r=R/255;
    g=G/255;
    b=B/255;
    if (r>=g)
        max=r;
    else max=g;
    if (b>=max)
    max=b;

    if (r<=g)
    	min=r;
    else min=g;
    if (b<=min)
    	min=b;
    v=100*max;
    h=Hue(r,g,b,min,max);
    s=100*Saturation(max,min);
    printf("%f %f\n",max,min );



    printf("H=%.0f   S=%.0f  V=%.0f\n",Hue(r,g,b,min,max),100*Saturation(max,min),v);
    if (h<=30 && s<=100 && v<=40)
    	printf("черный цвет\n");
    if (h==0 && s==0 && v==100 )
       printf("белый цвет\n");
    if (h>=40 && s<=60 && v==100 && s!=0 && h!=0 )
        printf("примерно белый цвет\n");
    
    if (h==60 && s==100 && v==100)
        printf("желтый цвет\n");
    if (h>=42 && h<=59 && s>=86 && s<=100 && v>=85 && v<=100)
        printf("примерно жёлтый\n");
    
    if (h==350 && s==25 && v==100)
        printf("розовый цвет \n");
    if (h>=334 && h<=360 && s>=26 && s<=34 && v>=97 && h!=350)
        printf("примерно розовый цвет\n");
    
    if (h==0 && s==100 && v==100)
        printf("красный цвет \n");
    if (h>0 && h<=7 && s>79 && s<=100 &&  v>79 && v<=100)
        printf("примерно красный\n");
    
    if (h==120 && s==100 && v==50)
        printf("зеленый цвет\n");
    if (h>95 && h<134 && h!=120 && s>36 && s<100 && v>56)
        printf("примерно зеленый\n");
    
    if (h>=0 && h<=360 && s<21 && v>=50 && v<=19)
        printf("серый цвет\n");
    



    	return 0;





}
float Hue(float r,float g,float b,float min, float max)
{
	float h;
	if (max==min)
		h=0;
	else if (max==r && g>=b)
		h=60*(g-b)/(max-min);
	else if (max==r && g<b)
	    h=(60*(g-b)/(max-min))+360;
	else if (max==g)
	    h=(60*(b-r)/(max-min))+120;
	else if (max==b)
	    h=(60*(r-g)/(max-min))+240;
return h;    

}
float Saturation(float max,float min)
{
	float s;
	if (max==0)
		s=0;
	else 
		s=1-(min/max);
return s;
}
