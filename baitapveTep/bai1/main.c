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

    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        {
            printf("\nA1[%d][%d]= ",i,j);
            scanf("%d", &A1[i][j]);
        }

    printf("Nhap so dong va so cot cua ma tran 2: ");
    scanf("%d%d",&n2,&m2);
    for(k=0;k<n2;k++)
    {
        for(h=0;h<m2;h++)
        {
            printf("\nA2[%d][%d]= ",k,h);
            scanf("%d", &A2[k][h]);
        }
    }

    printf("Ma tran 1: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("%4d",A1[i][j]);
        }
        printf("\n");
    }
    printf("\nMa tran 2: \n");
    for(k=0;k<n2;k++)
    {
        for(h=0;h<m2;h++)
        {
            printf("%4d",A2[k][h]);
        }
        printf("\n");
    }

    printf("\nTong 2 ma tran: \n");
    for(i=0,k=0;i<n1,k<n2;i++,k++)
       {
           for(j=0,h=0;j<m1,h<m2;j++,h++)
        {

           printf("%4d", A1[i][j]+A2[k][h]);
        }
        printf("\n");
       }



       FILE *f;
       f=fopen("CONG_MT.C","w");
       fprintf(f,"Ma tran 1: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            fprintf(f,"%4d",A1[i][j]);
        }
        fprintf(f,"\n");
    }
    fprintf(f,"\nMa tran 2: \n");
    for(k=0;k<n2;k++)
    {
        for(h=0;h<m2;h++)
        {
            fprintf(f,"%4d",A2[k][h]);
        }
        fprintf(f,"\n");
    }
       fprintf(f,"\nTong 2 ma tran: \n");
    for(i=0,k=0;i<n1,k<n2;i++,k++)
       {
           for(j=0,h=0;j<m1,h<m2;j++,h++)
        {

           fprintf(f,"%4d", A1[i][j]+A2[k][h]);
        }
        fprintf(f,"\n");
       }

    fclose(f);
     return 0;
}
