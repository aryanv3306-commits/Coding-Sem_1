#include<stdio.h>   
int main()
{
    int phy,chem,maths,eng,hindi,sum,percentage;
    printf("Enter marks of phy: ");
    scanf("%d",&phy);
    printf("Enter marks of chem: ");        
    scanf("%d",&chem);
    printf("Enter marks of maths: ");
    scanf("%d",&maths);
    printf("Enter marks of eng: ");
    scanf("%d",&eng);
    printf("Enter marks of hindi: ");
    scanf("%d",&hindi);
    sum=phy+chem+maths+eng+hindi;
    percentage=sum/5;
    printf("Sum of marks=%d\n",sum);
    printf("Percentage=%d\n",percentage);
    return 0;
}