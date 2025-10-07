// program to swap two numbers by using third variable
#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping, a = %d and b = %d", a, b);
    return 0;
}