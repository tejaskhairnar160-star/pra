#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, n, sum = 0;


    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Sum of diagonal elements */
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d", sum);

    /* Transpose of matrix */
    printf("\n\nTranspose of matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}