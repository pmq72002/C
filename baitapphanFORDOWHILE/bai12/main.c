//Bài 12: Viết chương trình tính hàm Sin(x) = x - x^3/3! + x^5/5! -...+(-1)^n * [x^(2*n+1)]/(2*n+1),
//với x và độ chính xác Eps thực nhập vào từ bàn phím,
//tức là tính cho đến khi nào |[x^(2*n+1)/(2*n+1)|<=Eps  thì dừng. In kết quả ra màn hình.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float eps,k,n,x;
    int i=0,j;
    double sin=0;
    printf("Nhap x: ");scanf("%f",&x);
    printf("Nhap eps: ");scanf("%f",&eps);
    x=(x*3.14)/180;
    do
    {
        k=1;
        for( j=1;j<=2*i+1;j++)
            k=k*j;
            n=pow(-1,i)*(pow(x,2*i+1)/k);
            sin=sin+n;
            i++;
    }while(fabs(n)>eps);
    printf("sin = %f",sin);
    return 0;
}
