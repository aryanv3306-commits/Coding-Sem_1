// program to find area and circumference of circle
#include <stdio.h>
int main()
{
    float radius, area ,circum;

    printf("enter radius of circle :");
    scanf("%f",&radius);

    area=3.14*radius*radius;
    circum=2*3.14*radius;

    printf("area of circle=%f",area);
    printf("circumference of circle=%f",circum);
    
    return 0;
}