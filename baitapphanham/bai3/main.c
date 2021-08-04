#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void nhapMT(int a[MAX][MAX], int n, int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            printf("\nA1[%d][%d]= ",i,j);
            scanf("%d", &a[i][j]);
        }
}
void inMT(int a[MAX][MAX], int n, int m)
{

for(int i=0;i<n;i++)
{
        for(int j=0;j<m;j++)
        {
        printf("%3d", a[i][j]);
        }
        printf("\n");
}
}
void tongMT(int a[MAX][MAX],int b[MAX][MAX],int n,int m,int p,int q)
{
    for(int i=0, k=0;i<n,k<p;i++,k++)
       {
           for(int j=0, h=0;j<m,h<q;j++,h++)
        {

           printf("%4d", a[i][j]+b[k][h]);
        }
        printf("\n");
       }
}
void tichMT(int A[MAX][MAX],int a[MAX][MAX],int b[MAX][MAX],int n,int m, int q)
{
    if(m==q)
{
    int i=0,j=0;
    A[i][j]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                A[i][j] += a[i][k]*b[k][j];
            }
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}else{
printf("KHONG CHIA DUOC!!!!");
printf("\nSo cot cua ma tran 1 phai bang so hang cua ma tran 2");
}
}

int main()
{
    int A[MAX][MAX], a[MAX][MAX], b[MAX][MAX];
    int n,m,p,q;
    printf("Nhap so dong va so cot cua ma tran 1 : ");
    scanf("%d%d",&n,&m);\
    nhapMT(a,n,m);
    inMT(a,n,m);
    printf("Nhap so dong va so cot cua ma tran 2 : ");
    scanf("%d%d",&p,&q);
    nhapMT(b,p,q);
    inMT(b,p,q);
    printf("tong hai ma tran la: \n");
    tongMT(a,b,n,m,p,q);
    printf("tich hai ma tran la: \n");
    tichMT(A,a,b,n,m,q);
    return 0;
}
