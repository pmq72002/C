#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char xauKT[100],xauKT1[100],xauKT2[100];
    char doixung[100]="";
    char temp;
    int j,i=0,dem=0,n=0;
    int flag = 1;
    gets(xauKT);
    fflush(stdin);
                                //SO LUONG PHAN TU TRONG CAU
    for(i=0;i<strlen(xauKT);i++)
    {
        dem++;
    }
    printf("so luong cac tu trong cau la: %d\n",dem);
                                // XAU DOI XUNG
    strcpy(xauKT1,xauKT);
    strcpy(xauKT2,xauKT);

    j=strlen(xauKT);
    for(i=0;i<strlen(xauKT)/2;i++)
    {
        temp=xauKT[j-1];
        xauKT[j-1]=xauKT[i];
        xauKT[i]=temp;
        j--;
    }
    for(i=0;i<strlen(xauKT);i++)
    {
        doixung[i]=xauKT[i];
    }
    printf("\nxau doi xung la: %s",doixung);

    while (xauKT1[n] != '\0') {             //'\0' là kí tự kết thúc chuỗi(null)
      if(xauKT1[n] != doixung[n]) {
         flag = 0;
         break;
      }
      n++;
   }

   if(flag==1){
      printf("\n=>day la xau doi xung");
   }else {
      printf("\n=>day khong phai la xau doi xung");
   }
                                //XOA DAU CACH
    int k,g;
    int sodaucach=0;
    g=strlen(xauKT1);
    for( k=0;k<g;k++)
    {
        if(xauKT1[k]==' ')
        {
            sodaucach++;
            for(int h=k;h<g-1;h++)
            xauKT1[h]=xauKT1[h+1];
        }

    }
    k--;
    xauKT1[g-sodaucach]='\0';
    printf("\nMang sau khi xoa:%s",xauKT1);

                            //Tach ten

    int h,l;
    printf("\n%s",xauKT2);
    int temp2;
    l=0;
    for(h=strlen(xauKT2)-1;h>=0;h--)
    {
        temp2=xauKT2[h];
        xauKT2[l]=temp2;
        l++;
        if(xauKT2[h]==' ')
        {
            break;
        }
    }
    printf("\ntach ten: %s",xauKT2);
return 0;
}
