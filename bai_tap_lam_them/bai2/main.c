#include <stdio.h>
#include <stdlib.h>

void MaxMinusMin(char a[], int N, int M)
{
    int b=1,temp;
    int dau,cuoi,hieu;
    for(M=0;M<N;M++)
   {
    //chuyển M sang string
   itoa(M,a,10);
   for(int i=0;i<strlen(a)-1;i++)
   {
       for(int j=i+1;j<strlen(a);j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
    b=atoi(a);

    cuoi=b%10;

    do
    {
        dau=b%10;
        b/=10;
    }while(b!=0);

    hieu=cuoi-dau;

    if(hieu==2)
    {
          printf("\n%d",M);
    }
   }
}

int main()
{
    int N,M;

    char a[100];

   do
   {
       printf("Nhap N: ");
       scanf("%d",&N);
   }while(N>2000000000);

   printf("Cac so nguyen duong M thoa man Max - Min = 2 la: ");
   MaxMinusMin(a,N,M);
}
