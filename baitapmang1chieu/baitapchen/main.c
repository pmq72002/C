#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int a[MAX];
    int n,i,temp,vtcanchen,sochen;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

   for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }

    printf("\nMang sau khi sap xep la la: ");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }

    printf("\nNhap so can chen: ");scanf("%d", &sochen);
    printf("\nnhap vi tri can chen: ");
    scanf("%d",&vtcanchen);
    printf("mang sau khi chen la: ");
    for(i=n;i>=vtcanchen;i--)
    {
        a[i]=a[i-1];
    }
    a[vtcanchen]=sochen;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
