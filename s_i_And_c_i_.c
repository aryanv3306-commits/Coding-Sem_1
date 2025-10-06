// program to find simple interest and compound interest
#include <stdio.h>
#include<math.h>
int main()
{
    float p, r, t, s_i, c_i;
    printf("enter the principal amount :");
    scanf("%f",&p);
    printf("enter the rate of interest :");
    scanf("%f",&r);
    printf("enter the time in years :");
    scanf("%f",&t); 

    s_i=(p*r*t)/100;
    c_i=p*pow((1+r/100),t)-p;
    printf("the simple interest is :%f",s_i);
    printf("the compound interest is :%f",c_i);
    return 0;   


}