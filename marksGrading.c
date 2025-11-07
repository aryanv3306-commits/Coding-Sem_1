// program to accept marks of five subject and find pecentage and print grade point
#include<stdio.h>
int main()
{
    int m1 ,m2 ,m3 ,m4 ,m5;
    printf("enter the marks of five subject \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    int per=(m1+m2+m3+m4+m5)/5;
    if( per>90 && per<100)
    printf("grade a");
    else if ( per>80)
    printf("grade b");
    else if ( per>60)
    printf("grade c");
    else
    printf("grade d");

    return 0;


}