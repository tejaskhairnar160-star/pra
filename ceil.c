#include <stdio.h>

/* Call by Value */
void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside Call by Value:");
    printf("\na = %d, b = %d", a, b);
}

/* Call by Reference */
void swapReference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;


    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nBefore Call by Value:");
    printf("\na = %d, b = %d", a, b);

    swapValue(a, b);

    printf("\n\nAfter Call by Value:");
    printf("\na = %d, b = %d", a, b);

    swapReference(&a, &b);

    printf("\n\nAfter Call by Reference:");
    printf("\na = %d, b = %d", a, b);

    return 0;
}