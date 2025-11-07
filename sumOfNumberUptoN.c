// program to print the sum of al number upto a given number
#include<stdio.h>
int main()
{
    int n ;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d is the sum upto %d",sum,n);
    return 0;
} 