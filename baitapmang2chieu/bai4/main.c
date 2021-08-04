#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int a[MAX][MAX];
    int i, j, n, d, gt, hang, cot;
    printf("Nhap n: ");
    scanf("%d", &n);
    hang=n-1;
    cot=n-1;
    d=0;
    gt=1;
while(gt<=n*n)
{
    for(i=d;i<=cot;i++)

            a[d][i]=gt++;



    for(i=d+1;i<=hang;i++)

            a[i][cot]=gt++;


    for(i=cot-1;i>=d;i--)

            a[hang][i]=gt++;


    for(i=hang-1;i>d;i--)

            a[i][d]=gt++;


    d++;
    hang--;
    cot--;
}

for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
{
    printf("%3d", a[i][j]);
}
printf("\n");
   }
    return 0;
}
