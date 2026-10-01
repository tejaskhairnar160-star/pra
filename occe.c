#include <stdio.h> 
int main() 
{    
    int n, d, count = 0;

    scanf("%d%d", &n, &d);    
    
    for (; n != 0; n /= 10)        
        if (n % 10 == d) 
            count++;    
        printf("Occurrences = %d", count);    
        return 0;
}        