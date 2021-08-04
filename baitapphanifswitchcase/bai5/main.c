/*Bai 5: Viết chương trình nhập vào 2 số là năm và tháng, kiểm tra tháng đó có bao nhiêu ngày.
In kết quả ra màn hình theo dạng: Tháng 3 năm 2014 có 31 ngày.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int thang, nam;
    printf("Nhap vao thang va nam: ");
    scanf("%d%d",&thang,&nam);
    if(nam%400==0||(nam%4==0 && nam%100!=0))
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
             printf("Thang %d nam %d co 31 ngay",thang, nam);
            break;
        case 2:
             printf("Thang %d nam %d co 29 ngay",thang, nam);
            break;\
        case 4:
        case 6:
        case 9:
        case 11:
             printf("Thang %d nam %d co 30 ngay",thang, nam);
            break;
        default:
            printf("khong hop le");
            break;
        }
    }
    else
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d nam %d co 31 ngay",thang, nam);
            break;
        case 2:
             printf("Thang %d nam %d co 28 ngay",thang, nam);
            break;\
        case 4:
        case 6:
        case 9:
        case 11:
             printf("Thang %d nam %d co 30 ngay",thang, nam);
            break;
        default:
            printf("khong hop le");
            break;
    }

    return 0;
    }
}
