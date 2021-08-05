#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhapdayso(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void xuatdayso(int a[], int n)
{
    printf("day so vua nhap: ");
    for(int i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
}
void sapxep(int a[],int n)
{
    int temp;
    printf("\n day so theo thu tu khong giam la: ");
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
}

void tongDIF(int a[],int n)
{
    int s=0;
    printf("tong cac so khac nhau la: \n");
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if(a[i]!=a[j])
                {
            s=a[i]+a[j];
            printf("%3d",s);
                }
            }
        printf("\n");
        }
}

void nguyento(int a[], int n)
{
    int dem;
    int i,j;
    printf("cac so nguyen to la:");
    for( i=0;i<n;i++)
    {
        dem=0;
        for( j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                dem++;
            }
        }
            if(dem == 2)
            {
                printf("\na[%d]",i);
            }else
            {
                printf(" ");
            }
    }
}

int main()
{
    int A[100];
    int n;
     printf("Nhap so phan tu: ");scanf("%d",&n);
    nhapdayso(A,n);
    xuatdayso(A,n);
    sapxep(A,n);
    tongDIF(A,n);
    nguyento(A,n);
}
