//Bài 1: tính tổng 10 số nguyên bất kì được nhập vào từ bàn phím
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,S;
    S=0;
    printf("Nhap 10 so nguyen bat ki:");
    for( i=0;i<10;i++)
    {
        scanf("%d",&x);
        S+=x;
    }
    printf("Tong S= %d",S);
    return 0;
}
