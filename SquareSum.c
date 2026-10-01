#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,sqt,sum=0;
    for (i = 1; i <=5; i++)
    {
        sum += i*i;
    }
    printf("%d",sum);
    
    return 0;
}
