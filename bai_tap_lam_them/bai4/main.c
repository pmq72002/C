#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float s1=0;
    float s2=0;
    float i,j;
    do
    {
        printf("Nhap vao so nguyen duong n: ");
        scanf("%d",&n);
    }while(n<0);

    for(i=1;i<=n;i++)
    {
        s1+=1/(i*(i+1));
    }
    printf("s1= %5.3f",s1);
    for(j=1;j<=n;j++)
    {
        s2+=1/(j*(j+1)/2);
    }
    printf("\ns2= %5.3f",s2);
    return 0;
}
