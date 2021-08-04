#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void nhap(int A[][MAX], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

}
void xuat(int A[][MAX], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
}

void tichMT(int A[][MAX],int B[][MAX],int C[][MAX],int m1, int n2, int n1, int m2,int i, int j)
    {
        if(m1==n2)
    {
    C[i][j]=0;
    printf("Tich 2 ma tran la:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            for(int k=0;k<n1;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%4d", C[i][j]);
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
    int A[MAX][MAX];
    int B[MAX][MAX];
    int C[MAX][MAX];
    int n, m, b, p, i, j, k, option;
    printf("Menu");
    printf("\n1. Nhap hai ma tran");
    printf("\n2. Tinh tich hai ma tran");
    printf("\n3. In ma tran ra man hinh");
    printf("\n4. Ket thuc");
while(option!=4)
{   printf("\nnhap lua chon: ");
    scanf("%d", &option);
    switch(option)
    {
    case 1:
        {
        printf("Nhap so dong va so cot ma tran 1: ");
        scanf("%d%d",&n,&m);
        nhap(A,n,m);
        printf("Nhap so dong va so cot ma tran 2: ");
        scanf("%d%d",&b,&p);
        nhap(B,b,p);
        break;
    }
    case 2:
    {tichMT(A,B,C,m,b,n,p,i,j);
    break;
    }
    case 3:
   {
    printf("Ma tran 1: \n");
    xuat(A,n,m);
    printf("\n");
    printf("Ma tran 2: \n");
    xuat(B,b,p);
    break;
   }
    case 4:
        {
        printf("\nKet thuc");
        break;
        }
}
}
}

