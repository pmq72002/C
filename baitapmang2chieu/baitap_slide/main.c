#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int A[MAX][MAX],B[MAX][MAX];

    int i,j,dong,cot,temp;
    printf("Nhap so dong va cot cua ma tran: ");
    scanf("%d%d",&dong,&cot);
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }

    /*for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            B[i][i]+=A[i][j];
        }
    }

        printf("\ntong cac hang cua ma tran: \n");
    for(i=0;i<dong;i++)
    {
        printf("%3d",B[i][i]);
        printf("\n");
    }*/

   /* printf("Ma tran chuyen vi cua A la: \n");
    B[i][j]=0;
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("%3d",B[i][j]);
        }
        printf("\n");
    }*/


      /*  printf("cac hang theo chieu tang dan: \n");
    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot-1;j++)
           {
            for(int k=j+1;k<cot;k++)
                {
                if(A[i][j]>A[i][k])
                    {
                        temp=A[i][j];
                        A[i][j]=A[i][k];
                        A[i][k]=temp;
                    }
                }
           }
    }

    for(i=0;i<dong;i++)
    {
        for(j=0;j<cot;j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }*/

                        //in cot theo chieu giam dan
    int tg;
    for(j=0;j<cot;j++){
    for(i=0;i<dong-1;i++){
    for(int k=i+1;k<cot;k++){
    if(A[i][j]<A[k][j]){
    int tg=A[i][j];
    A[i][j]=A[k][j];
    A[k][j]=tg;
}
}
}
}
printf("\ncac cot theo chieu giam dan la:\n");
for(i=0;i<dong;i++){
for(j=0;j<cot;j++){
printf("%5d",A[i][j]);
}
printf("\n");}

    return 0;
}
