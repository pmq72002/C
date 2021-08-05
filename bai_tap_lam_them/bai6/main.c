#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,y;
    printf("Nhap nam y: ");scanf("%d",&y);
    do
    {
        printf("nhap thang m: ");
        scanf("%d",&m);
    }while(m>12||m<1);

    if(y%400==0||y%4==0&&y%100!=0)
    {
        printf("\nDay la nam nhuan, ");
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            printf("so ngay = 31");
        }else
            if(m==2)
            {
                printf("so ngay =29");
            }else
                if(m==4||m==6||m==9||m==11)
            {
                printf("so ngay = 30");
            }
    }else
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            printf("so ngay = 31");
        }else
            if(m==2)
            {
                printf("so ngay =28");
            }else
                if(m==4||m==6||m==9||m==11)
            {
                printf("so ngay = 30");
            }
    }

    return 0;
}
