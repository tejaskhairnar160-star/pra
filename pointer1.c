#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr;
    int n, i, sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    max = *ptr;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);

        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    printf("\nSum of array elements = %d", sum);
    printf("\nMaximum element = %d", max);

    return 0;
}