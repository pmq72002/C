#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,temp;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("nmang vua nhap la: ");
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }

    for(i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }

    printf("\nmang theo thu tu tang dan la: ");
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
