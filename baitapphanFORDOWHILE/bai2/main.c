//Bài 2:Kiểm tra một số có phải là số nguyên tố hay không
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x;
    int demuoc = 0; // là số nghiệm
    printf("Nhap 1 so bat ki: "); // số nguyên tố chỉ có 2 nghiệm là 1 và chính nó
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0) // chia hết
        {
            demuoc++;
        }
    }
        if(demuoc==2) // chia hết cho 2 số thôi
        {
            printf("day la so nguyen to");
        }else
            {
            printf("day khong la so nguyen to");
            }
    return 0;
}
