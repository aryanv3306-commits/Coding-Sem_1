// program to find the sum of digit of the entered number
#include<stdio.h>
int main()
{
    int n ;
    printf("enter the number\n");
    scanf("%d",&n);
    int sum=0,lastdigit;
    while (n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("sum of digit of entered number is %d",sum);
    return 0;
}