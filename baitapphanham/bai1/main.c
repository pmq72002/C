#include <stdio.h>
#include <stdlib.h>

float tinhMu(float S, int x, int y)
{
    S=1;
    for(int i=0;i<y;i++)
    {
        S*=x;
    }
    printf("x^y= %f",S);
}

    int main()
{
    int a, b;
    a=4.2;
    b=2;
    tinhMu(1,a,b);
    return 0;
}
