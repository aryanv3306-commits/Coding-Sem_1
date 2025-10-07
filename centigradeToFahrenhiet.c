// program to convert temperature from centigrade to fahrenheit
#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf(" temperature in fahrenheit :%f ",fahrenheit);
    return 0;
}       