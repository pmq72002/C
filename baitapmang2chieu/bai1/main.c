#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    //TH1:
    int a[3][3]={{1,3,2},{4,6,5},{7,9,8}};
    int i,j;
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    //TH2:
    int A[MAX][MAX];
    int n,m;
    printf("Nhap so dong va so cot: ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
