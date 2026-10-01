#include <stdio.h>

int main()
{
    int num;
    int *ptr;


    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("\nValue of num = %d", num);
    printf("\nAddress of num = %u", &num);
    printf("\nValue stored in pointer = %u", ptr);
    printf("\nValue accessed using pointer = %d", *ptr);

    /* Modifying value using pointer */
    *ptr = 100;

    printf("\n\nAfter modifying value using pointer:");
    printf("\nValue of num = %d", num);
    printf("\nValue accessed using pointer = %d", *ptr);

    return 0;
}