//Bài 2: Tính tổng các số nguyên tố nhỏ hơn 1 số nhập vào
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    int demuoc = 0;
    int s=0; // là số nghiệm
    printf("Nhap 1 so bat ki: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
           {
                if(i%j==0)
                {
                    demuoc++;
                }
           }
                if(demuoc==2)
                {
                    s+=i;
                    demuoc=0;
                }else
                    {
                    demuoc=0;
                    }
    }
    printf("Tong cac so nguyen to nho hon %d la %d", n, s);
    return 0;
}
