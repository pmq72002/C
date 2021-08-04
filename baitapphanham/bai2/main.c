#include <stdio.h>
#include <stdlib.h>

int giaithua( int n)
{
    if(n==0)
        return 1;
    else
        return n*giaithua(n-1);
}

int main()
{
    printf("%d",giaithua(6));
    return 0;
}
