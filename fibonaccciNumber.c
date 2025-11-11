//program to print the fibonacci series up to n terms
#include<stdio.h>
int main()
{
    int n , sum=0 ;
    printf("enter the nthtems : ");
    scanf("%d",&n);
    int a=1,b=1;
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;

    }
    printf("%d is the %d fabonacci number",sum,n);
    return 0; 
    }
