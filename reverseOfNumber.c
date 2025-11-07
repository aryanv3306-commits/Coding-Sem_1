// program to find the reverse of a number 
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int rev=0,lastdigit;
    while(n!=0){
        rev=rev*10;
        lastdigit=n%10;
        rev=rev+lastdigit;
        n=n/10;
    }
    printf("%d is the reverse of a number",rev);
    return 0;

}