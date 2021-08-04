#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[15]={1,1,1,2,2,3,4,4,5,5,6,6,7,7,8};
    int x,dem=0;

    printf("mang a[15]={1,1,1,2,2,3,4,4,5,5,6,6,7,7,8}");
    printf("\nnhap phan tu x: ");
    scanf("%d", &x);

    for(int i=0;i<15;i++)
    {
        if(x==a[i])
        {
            dem++;
        }
    }
    printf("x xuat hien %d lan trong mang", dem);
    return 0;
}
