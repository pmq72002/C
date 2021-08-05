#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float x;
    float s1=0,s2=0;
    printf("n= ");
    scanf("%d",&n);
    printf("\nx= ");
    scanf("%f",&x);

    for(int i=1;i<=n;i++)
    {
        s1+=pow(x,2*i);
    }
    printf("s1= %5.2f",s1);

    for(int j=0;j<=n;j++)
    {
        s2+=pow(x,2*j+1);
    }
    printf("\ns2= %5.2f",s2);
    return 0;
}
