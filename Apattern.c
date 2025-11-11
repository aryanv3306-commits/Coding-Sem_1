// program to print A pattern like below
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
            if((j == 0 || j == rows) && i != 0 ||
               i == 0 && j != 0 && j != rows ||
               i == rows / 2)
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