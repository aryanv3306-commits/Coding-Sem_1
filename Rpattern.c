// pattern to prin t R pattern 
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if (j == 1 || (i == 1 && j < rows) || (i == (rows + 1) / 2 && j < rows) || (j == rows && i != 1 && i < (rows + 1) / 2) || (i - j == (rows - 1) / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}