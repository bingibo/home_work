#include <stdio.h>
#include <stdio.h>
int main(void)
{
    int day, year, month, day1;
    printf("пожалуйста, введите количесво дней которые хотите перевести \n"  ); 
    scanf("%d", &day);
    year=day/365;
    month=((day-(year*365))/30);
    day1=(day-(month*30)-(year*365));
    printf("%d год(а)/лет, %d месяц(а)/месяцев,  %d день/дня/дней \n",  year, month, day1);
    return 0;
}
