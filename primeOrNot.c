// program to check whether a number is prime or not
#include <stdio.h>  
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);    
    int a=0;
    for(int i=2; i<=n/2; i++)
    {
        if (n%i==0)
        a=1;
    }
    if (n==1)
    printf("%d is neither prime not composite",n);
    else if (a==0)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
    return 0;

}