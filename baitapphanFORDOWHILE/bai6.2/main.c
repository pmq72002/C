//Tìm ước chung lớn nhất, bội chung nhỏ nhất của hai số nguyên được nhập vào từ bàn phím
#include <stdio.h>
#include <stdlib.h>

//tim UCLN
int UCLN(int a, int b)
{
    if (b==0)
    {
        return a;
    }else
    {
        return UCLN(b,a%b);
    }
}
int BCNN(int a,int b)
{
        return (a*b)/UCLN(a,b);
}

int main()
{
    int a,b;
    printf("Nhap 2 so bat ki: "); scanf("%d%d",&a,&b);
    printf("UCLN = ");
    printf("%d",UCLN(a,b));
    printf("\nBCNN = ");
    printf("%d",BCNN(a,b));
    return 0;
}
