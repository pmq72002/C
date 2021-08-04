#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int A1[MAX][MAX];
    int A2[MAX][MAX];
    int A[MAX][MAX];
    int i,j,k,h,g,n1,m1,n2,m2;


    printf("Nhap so dong va so cot cua ma tran 1: ");
    scanf("%d%d",&n1,&m1);

    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        {
            printf("\nA1[%d][%d]= ",i,j);
            scanf("%d", &A1[i][j]);
        }

    printf("Nhap so dong va so cot cua ma tran 2: ");
    scanf("%d%d",&n2,&m2);

    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("\nA2[%d][%d]= ",i,j);
            scanf("%d", &A2[i][j]);
        }
    }
    //số phần tử trên dòng ma trận 1 = số phần tử trên cột ma trận 2
if(m1==n2)
{
    A[i][j]=0;
    printf("Tich 2 ma tran la:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            for(k=0;k<n1;k++)
            {
                A[i][j] += A1[i][k]*A2[k][j];
            }
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}else{

printf("\nSo cot cua ma tran 1 phai bang so hang cua ma tran 2");
}

    return 0;
}
