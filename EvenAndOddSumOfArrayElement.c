// program to print the even and odd element of an array 
#include<stdio.h>
int main()
{
 int n,i;
    printf("enter the elements in array : ");
    scanf("%d",&n);
    int A[n];
    for (i=0;i<n;i++){
        printf("enter the element A[%d]",i);
        scanf("%d",&A[i]);
    }
    int esum=0, osum=0;
    for (i=0;i<n;i++){
        if(A[i]%2==0)
        esum=esum+A[i];
        else
        osum=osum+A[i];
    }
    printf("even sum =%d\n",esum);
    printf("odd sum =%d",osum);
    return 0;
}
