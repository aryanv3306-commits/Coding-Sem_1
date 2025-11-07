// program to find whether a number is even or odd
#include <stdio.h>  
int main() 
{
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);  

    // ternary opereator 
    ( num%2==0 ? printf("no is even ") : printf("no is odd"));

    // if (num % 2 == 0) 
    // {
    //     printf("%d is even.\n", num);
    // } 
    // else {
    //     printf("%d is odd.\n", num);
    // }

    return 0;
}
