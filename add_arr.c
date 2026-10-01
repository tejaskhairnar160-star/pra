#include<stdio.h>
int main()
{
    int sum,arr[50][50],i,j,size;

    printf("Enter the array number : ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("Enter [%d] row and [%d] column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Addition of Array.\n");

    for(i=0;i<size;i++)
    {
        sum = 0;
        for(j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);

            sum += arr[i][j];
        }
        printf("       = %d\n",sum);
    }

    
    return 0;
}
