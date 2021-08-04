/*Bai 2: Viết chương trình giải hệ phương trình tuyến tính bậc nhất hai ẩn:
ax + by = c
dx + ey = f
với các hệ số thực a, b, c, d, e, f được nhập vào từ bàn phím.*/

#include <stdio.h>
#include <stdlib.h>

/*int main() //em làm theo phương pháp thế
{
    float a,b,c,d,e,f,x,y;
    printf("Giai he phuong trinh dang: ax + by = c");
    printf("\n                           dx + ey = f");
    printf("\nNhap a,b,c,d,e,f");

    printf("\na =");
    scanf("%f",&a);
    printf("b =");
    scanf("%f",&b);
    printf("c =");
    scanf("%f",&c);
    printf("d =");
    scanf("%f",&d);
    printf("e =");
    scanf("%f",&e);
    printf("f =");
    scanf("%f",&f);
    printf("he phuong trinh co dang: %0.2fx + %0.2fy = %0.2f",a,b,c);
    printf("\n                         %0.2fx + %0.2fy = %0.2f\n",d,e,f);
    if(a==0 && b==0 && d==0 && e==0 && c!=0 && f!=0)
    {
        printf("He phuong trinh vo nghiem");
    }
    else
        if(a==d && b==e && c==f)
    {
            printf("He phuong trinh co vo so nghiem");
    }
    else
        if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && f!=0)
    {
        y = (f-d*c/a)/(e-b*d/a);
        x = (c-b*y)/a;
        printf("He phuong trinh co cap nghiep la: \n");
        printf("x=%0.2f",x);
        printf("\ny=%0.2f",y);
    }
    else // a,b,d,e !=0 && c==0 && f==0 vd: a=2, b=3, c=0, d=1, e=4, f=0
    {
        printf("He phuong trinh co cap nghiem duy nhat x=y=0");
    }
    return 0;
}
*/
int main() // em làm theo công thức Cramer
{
    float a,b,c,d,e,f,x,y,D,Dx,Dy;
    printf("Giai he phuong trinh dang: ax + by = c");
    printf("\n                           dx + ey = f");
    printf("\nNhap a,b,c,d,e,f");

    printf("\na =");
    scanf("%f",&a);
    printf("b =");
    scanf("%f",&b);
    printf("c =");
    scanf("%f",&c);
    printf("d =");
    scanf("%f",&d);
    printf("e =");
    scanf("%f",&e);
    printf("f =");
    scanf("%f",&f);
    printf("he phuong trinh co dang: %0.2fx + %0.2fy = %0.2f",a,b,c);
    printf("\n                         %0.2fx + %0.2fy = %0.2f\n",d,e,f);

    D = a*e-d*b;
    Dx = c*e-f*b;
    Dy = a*f-d*c;
    if(D==0)
    {
        if( Dx==0&&Dy==0&&Dx==Dy)
        printf("He phuong trinh co vo so nghiem");
        else
        printf("He phuong trinh vo nghiem");
    }
    else
        {
            x=Dx/D;
            y=Dy/D;
    printf("x=%0.2f",x);
    printf("y=%0.2f",y);
    }
return 0;
}
