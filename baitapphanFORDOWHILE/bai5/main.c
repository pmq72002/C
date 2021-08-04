//Bài 5:Viết chương trình nhập vào số n và in ra các ước của số n đó.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    printf("Uoc cua n la: ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            s+=i;
        }
    }
     printf("s= %d ",s);
    return 0;
}
