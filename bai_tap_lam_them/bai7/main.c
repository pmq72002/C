#include <stdio.h>
#include <stdlib.h>

int main()
{
      float a, b, c, x1, x2;
    printf("Nhap vao a,b,c: ");
    scanf("%f %f %f",&a, &b, &c);
    if(a==0)
    {
        if(b==0)
            if(c==0)
                printf("Phuong trinh vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
            else
                printf("Phuong trinh co nghiem duy nhat = %0.2f",-c/b);
    }
    else
    {
        float delta = b*b-4*a*c;
        if(delta<0)
            printf("Phuong trinh vo nghiem");
        else
            if(delta == 0)
            printf("Phuong trinh co nghiem kep = %0.2f",-b/(2*a));
        else
    {
            x1= (-b+sqrt(delta))/(2*a);
            x2= (-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet x1, x2:");
            printf("%\nx1=%1.2f",x1);
            printf("%\nx2=%1.2f",x2);
    }
    }
    return 0;
}
