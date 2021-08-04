//Bài 8:Tính giá trị giai thừa: n!. Trong đó n nhập vào từ bàn phím. In kết quả ra màn hình.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int S=1;
    printf("Nhap 1 so n bat ki: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S=S*i;
    }
    printf("gai thua n!=%d", S);
    return 0;
}
