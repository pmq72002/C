#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int n=5,i,j,vtcanxoa,phantucanxoa;

    printf("mang ban dau la: ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }

    printf("\nnhap phan tu can xoa: ");
    scanf("%d",&phantucanxoa);
    printf("mang sau khi xoa la: ");

    for(i=0;i<n;i++)
    {
        if(a[i]==phantucanxoa)
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
    }
    i--;n--;
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }

    return 0;
}
