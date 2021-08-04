#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={12,2,3,4,5,6,7,8,92,10};
    int min=10,max=0;
    int vitrimin=0,vitrimax=0;
    for(int i =0 ;i<9;i++)
    {
       if(min<a[i])
    {
    min=min;
    }else
    {
    min =a[i];
    vitrimin=i;
    }

if(max>a[i])
{
    max=max;
}else
 {
    max =a[i];
    vitrimax=i;
 }

    }
    printf("phan tu be nhat trong mang la: %d",min);
    printf("\nphan tu be lon trong mang la: %d",max);
    printf("\nvi tri phan tu be nhat la: %d",vitrimin);
   printf("\nvi tri phan tu lon nhat la: %d",vitrimax);
    return 0;
}


