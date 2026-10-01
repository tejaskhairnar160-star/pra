#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,max,min,arr[100],i,size;

    printf("Enter the Array size : ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("Enter the [%d] element : ",i+1);
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for(i=0;i<size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum value is %d",max);

     min = arr[0];
    for(i=0;i<size;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nMinimum value is %d",min);

    for(i=0;i<size;i++)
    {
        sum += arr[i];
    }
    printf("\nTotal Sum of elements : %d",sum);

    float avg = sum/size;
    printf("\nAverage of elements : %.2f",avg);
    return 0;
}
