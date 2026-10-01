#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5],i,j,d;

    printf("Enter the all elements : \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEntered element printed : ");

    for ( i = 0; i < 5; i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\nenter element to be remove : ");
    scanf("%d",&d);

    for ( i = 0; i < 5; i++)
    {
        if (arr[i] == d)
        {
            for ( i = 0; i < 5; i++)
            {
                arr[j] = arr[j+1];
            }
        }        
    }
    

    printf("\nAfter deleted element : ");
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
