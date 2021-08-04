#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int A1[MAX][MAX];
    int A2[MAX][MAX];
    int i,j,k,h,n1,m1,n2,m2;


    printf("Nhap so dong va so cot cua ma tran 1: ");
    scanf("%d%d",&n1,&m1);
    printf("Nhap so dong va so cot cua ma tran 2: ");
    scanf("%d%d",&n2,&m2);



    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        {
            printf("\nA1[%d][%d]= ",i,j);
            scanf("%d", &A1[i][j]);
        }


    for(k=0;k<n2;k++)
    {
        for(h=0;h<m2;h++)
        {
            printf("\nA2[%d][%d]= ",k,h);
            scanf("%d", &A2[k][h]);
        }
    }
    printf("\n");
    for(i=0,k=0;i<n1,k<n2;i++,k++)
       {
           for(j=0,h=0;j<m1,h<m2;j++,h++)
        {

           printf("%4d", A1[i][j]+A2[k][h]);
        }
        printf("\n");
       }
    return 0;
}


