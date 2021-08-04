//Bài 9:Tính tổng:S=1 + 1/2! + ... + 1/n!		Với giá trị của n nhập vào từ bàn phím.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float i,j,S,giaithua;
    giaithua =1;
    S=0;
    printf("Nhap gia tri cua n: ");
    scanf("%d",&n);
        //n= 5 => S = 1.76
        for(i=1;i<=n;i++)
    {
            giaithua=giaithua*i; /* sau mỗi 1 vòng lặp thì i sẽ nhân với chính kết quả giai thừa của vòng lặp trước
                                    ví dụ: n = 4
                                    i=1 => giaithua = 1
                                    i=2 => giaithua = 1*2=2
                                    i=3 => giaithua = 2*3=6
                                    i=4 => giaithua = 4*6=24
                                    */
            //printf("i = %0.1f",i);           kiểm tra i và giai thừa
            //printf("giathua= %f\n",giaithua);
            S += 1/giaithua;
    }

    printf("S= %5.2f",S);
    return 0;
}
