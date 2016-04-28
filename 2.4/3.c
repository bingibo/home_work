 #include <stdio.h>
long long feb(int a);
int main()
{ 
    int a,b=0;
    printf("введите длинну последовательности\n");
    scanf("%d",&a);
    while(b<a)
    { 
        printf("%lld ",feb(b));
        ++b;
    }
    printf("\n");
}


    long long  feb(int a)
    {
    if (a<2)
        return 1;
    else 
        return(feb(a-1)+feb(a-2));
    }


	
		
	



