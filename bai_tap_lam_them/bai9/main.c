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

int main()
{
    int m;
    int n;
    int i=0;
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
    printf("\n\nM co phai la so nguyen to? ");
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
        printf(" => Day la so nguyen to");
    }else{
        printf(" => Day khong la so nguyen to");
    }


    //kiem tra doi xung

    itoa(m,a,10);
     n=strlen(a);
    int j=n-1;
    printf("\n\nM co phai la so doi xung? ");
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
       printf(" =>Day la so doi xung\n\n");
   }else{
   printf(" =>Day khong phai la so doi xung\n\n");
   }
}
