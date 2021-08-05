#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhapdayso(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%f",&a[i]);
    }
}

void xuatdayso(float a[], int n)
{
    printf("day so vua nhap: ");
    for(int i=0;i<n;i++)
    {
        printf("%3.1f",a[i]);
    }
}

void locationMin(float a[], int n)
{
    float min;
    int vitriMin=0;
    min=a[0];
    for(int i=0;i<n;i++)
    {
       min=min<a[i]?min:a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]!=min)
        {
            vitriMin++;
        }else

            {
                break;
            }
    }
    printf("\n\ngia tri nho nhat: %5.1f",min);
    printf("\nVi tri cua phan tu nho nhat dau tien la a[%d]",vitriMin);
}

void locationMax(float a[],int n)
{
    float max;
    int vitriMax=0;
    max=a[0];
    for(int i=0;i<n;i++)
    {
       max=max>a[i]?max:a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]!=max)
        {
            vitriMax++;
        }else

            {
                break;
            }
    }
    printf("\n\ngia tri lon nhat: %5.1f",max);
    printf("\nVi tri cua phan tu lon nhat dau tien la: a[%d]",vitriMax);
}



void nearestGPA(float a[],int n)
{
    float m=0;
    for(int i=0;i<n;i++)
    {
        m+=a[i];
    }
    m=m/n;
    printf("\n\ngia tri trung binh: m= %5.2f",m);


    float disMin=fabs(a[0]-m);
    int vtdisMin=0;
    //tìm khoảng cách nhỏ nhất giữa gpa với các phần tử
    for(int j=0;j<n;j++)
    {
       disMin=disMin<fabs(a[j]-m)?disMin:fabs(a[j]-m);
    }

    for(int k=0;k<n;k++)
    {
            if(fabs(a[k]-m)==disMin)
        {
                printf("\nVi tri cua phan tu co gia tri gan voi m nhat la: a[%d]",k);
        }
    }

}
void doanAB(float a[],int n)
{
    float max;
    float min;
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++)
    {
       max=max>a[i]?max:a[i];
       min=min<a[i]?min:a[i];
    }
    printf("\n\nDoan [a,b]=[%d,%d]",(int)min,(int)(max+0.99));
}

int main()
{
    float A[100];
    int n;
    printf("Nhap so phan tu: ");scanf("%d",&n);
    nhapdayso(A,n);
    xuatdayso(A,n);
    locationMin(A,n);
    locationMax(A,n);
    nearestGPA(A,n);
    doanAB(A,n);
}
