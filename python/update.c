#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={15,44,12,33,66};
    int n,up;

    printf("Enter the 5 elements : \n");

    for (int i = 0; i <5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    


    printf("\nEnter the search and update element : ");
    scanf("%d",&n);

    printf("\n");

    for ( int i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            printf("Enter updatting value : ");
            scanf("%d",&up);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}
