/*Bai 4: Viết chương trình nhập vào ba số a, b, c.
Sau đó kiểm tra xem ba số này có tạo thành cạnh của tam giác hay không.
Nếu là tam giác thì kiểm tra xem đó là loại tam giác nào trong số các loại sau: vuông, vuông cân, cân, đều, tam giác thường.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Nhap vao a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>0 && b>0 &&c>0)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
           printf("Co tao thanh canh cua tam giac\n");
           if(a==b&&b==c&&c==a)
   {
       printf("Day la tam giac deu");
   }
   else
    if(a==b||b==c||c==a)
   {
       if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
       {
           printf("day la tam giac vuong can");
       }
       else
       {
           printf("day la tam giac can");
       }
   }
   else
    if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
    {
        printf("Day la tam giac vuong");
    }
    else
    {
        printf("Day la tam giac thuong");
    }
        }
        else
        {
             printf("Khong tao thanh canh cua tam giac");
        }
    }
    else
    {
        printf("Nhap a,b,c duong");
    }

    return 0;
}
