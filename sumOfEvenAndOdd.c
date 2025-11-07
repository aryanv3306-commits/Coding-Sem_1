// program to print the sum of even and oddd numbers from 1 to N numbers
#include<stdio.h>
int main()
{
     int n,i,esum=0,osum=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if (i%2==0)
        esum=esum+i;
        else
        osum=osum+i;
    }
    printf("even sum = %d\n",esum);
    printf("odd sum = %d\n",osum);
    
    return 0;
}
