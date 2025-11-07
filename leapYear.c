// program to check the year is leap year or not 
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if (year%400==0 || year%4==0 && year!=0)
    printf("%d is leap year",year);
    else
    printf("%d is not leap year",year);
    return 0;
}