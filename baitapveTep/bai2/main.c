#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int A[MAX][MAX];
    int B[MAX][MAX];
    int C[MAX][MAX];
    int i,j,k,h,g,n,p,m;


    printf("Nhap so dong va so cot cua ma tran 1: ");
    scanf("%d%d",&n,&p);

    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
        {
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d", &A[i][j]);
        }

    printf("Nhap so dong va so cot cua ma tran 2: ");
    scanf("%d%d",&p,&m);

    for(i=0;i<p;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nB[%d][%d]= ",i,j);
            scanf("%d", &B[i][j]);
        }
    }



    C[i][j]=0;
    printf("Tich 2 ma tran la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

FILE *f;
f=fopen("TICH_MT.C","w");
fprintf(f,"\nn=%d",n);
fprintf(f,"\np=%d",p);
fprintf(f,"\nm=%d",m);

fprintf(f,"\nMa tran A: \n");
for(i=0;i<n;i++)
     {
        for(j=0;j<p;j++)
        {
            fprintf(f,"%4d",A[i][j]);
        }
        fprintf(f,"\n");
     }
fprintf(f,"\nMa tran B: \n");
for(i=0;i<n;i++)
       {
           for(j=0;j<p;j++)
        {
            fprintf(f,"%4d",B[i][j]);
        }
        fprintf(f,"\n");
       }
        fclose(f);

        //ghi bo sung
FILE *q;
q=fopen("TICH_MT.C","a");
 fprintf(q,"Tich 2 ma tran la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            fprintf(q,"%4d", C[i][j]);
        }
       fprintf(q,"\n");
    }
    fclose(q);
    return 0;

}
