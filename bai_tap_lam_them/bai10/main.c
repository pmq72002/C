#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// dem so chu so
int CountNum(int n)
{
    int count=0;
    while(n>0)
   {
       n/=10;
       count++;
   }
   return count;
}

void Amstrong(int m)
{
    int n,r,biendau;
    int luythua;
    for(n=0;n<m;n++)
    {
    luythua=CountNum(n);
    biendau = n;
    int s=0;
   while(biendau>0)
   {
       r=biendau%10;
       s=s+pow(r,luythua);
       biendau/=10;
   }
   if(s==n)
   {
       printf("\n%d",s);
   }
    }
}


int main()
{
    int m;
    do
   {
       printf("Nhap M: ");
       scanf("%d",&m);
   }while(m>2000000000);
    Amstrong(m);
    return 0;
}
