#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sumEven=0,i,n,sumOdd=0;
    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
           sumEven += i;
        else
            sumOdd += i;   
    }
    printf("%d",sumEven);
    printf("\n%d",sumOdd);

    return 0;
}
