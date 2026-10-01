#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,fec=1;
    printf("Enter the number : ");
    scanf("%d",&n);//5
    for(int i=1;i<=n;i++)
    {

        fec *= i; 
    }
    printf("%d",fec);
    return 0;
}
