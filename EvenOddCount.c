#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,oddCount=0,evenCount=0;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            evenCount++;
        else
            oddCount++;    
    }
    printf("%d",evenCount);
    printf("%d",oddCount);
    return 0;
}
