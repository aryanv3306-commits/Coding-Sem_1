// program to print N pattern like below
#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j <= rows; j++)
        {
            if(j == 0 || j == rows || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
