#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*p,*q;
    int temp;
    a=6;
    b=4;
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("%d-%d",*p,*q);
    return 0;
}
