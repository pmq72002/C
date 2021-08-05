#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<math.h>

bool kiemTra(char a[], int n)
{
    if(n==0) return false;
    if(a[0]=='0') return false;
    for(int k=0;k<n;k++)
    {
        if(a[k]<'0' || a[k]>'9')
        return false;
    }
    return true;
}

int checkNT(int m)
{
    int dem=0;
    for(int h=1;h<=m;h++)
    {
        if(m%h==0)
        {
            dem++;
        }
    }
    if(dem==2)
    {
        return 1;
    }
}

bool kiemtraDOIXUNG(char a[],int m)
{
    int n;
    int i=0;
    itoa(m,a,10);
    n=strlen(a);
    int j=n-1;

    if(kiemTra(a,n)==false)
    {
        printf("\nban nhap sai dinh dang");
        return 0;
    }

    bool DK=true;
   while(i<j)
   {
       if(a[i]!=a[j])
       {
           DK=false;
           break;
       }else{
        i++;
        j--;
       }
   }
   if(DK==true)
   {
       return true;
   }else{
   return false;
   }
}

int main()
{
    int m;
    int s=0;
    int s1=0;
    char a[100];
    do
   {
       printf("Nhap M: ");
       scanf("%d",&m);
   }while(m>2000000000);

   //kiem tra chinh phuong

    int sqr = sqrt(m);
    printf("M co phai la so chinh phuong? ");
    if(sqr*sqr==m)
    {
        printf(" =>Day la so chinh phuong");
    }else{
        printf(" =>Day khong la so chinh phuong");
    }

    //kiem tra nguyen to
    if(checkNT(m)==1)
    {
        printf("\n\nM la so nguyen to\n");
    }else{
        printf("\n\nM ko la so nguyen to\n");
    }
    printf("\nCac so nguyen to nho hon n la: ");
    for (int i = 2; i <= m; i++)
      {
          if (checkNT(i) == 1)
           {
               printf("%4d", i);
               s+=i;
           }
      }
      printf("\nS= %d",s);


    //kiem tra doi xung
    printf("\n\nM co phai la so doi xung? ");
   if(kiemtraDOIXUNG(a,m)==true)
   {
    printf(" => M la so doi xung\n\n");
   }else{
    printf("=> M khong la so doi xung\n\n");
   }
   printf("Cac so doi xung nho hon M la:");
   for(int i=1;i<m;i++)
   {
       if(kiemtraDOIXUNG(a,i)==true)
       {
           printf("\%4d",i);
           s1+=i;
       }
   }
   printf("\nS1= %d",s1);

}
