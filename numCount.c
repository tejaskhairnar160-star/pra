#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,count;
    for ( i = 1; i < 100; i++)
    {
        if (i > 10)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
