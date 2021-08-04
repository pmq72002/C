/*Bai3:Nhập vào từ bàn phím một điểm số bất kì. Kiểm tra xem ứng với điểm số đó sẽ xếp loại gì ?
ĐTB<5: Yếu
5<=DTB<7: TB
7<=DTB<8: Khá
8<=DTB<9: Giỏi
ĐTB>9: Xuất sắc
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float DTB;
    printf("Nhap diem:");
    scanf("%f",&DTB);
    if(DTB>=0 && DTB<5)
        printf("Yeu");
    else
        if(DTB>=5 && DTB<7)
        printf("TB");
    else
        if(DTB>=7 && DTB<8)
        printf("Kha");
    else
        if(DTB>=8 && DTB<9)
        printf("Gioi");
    else
        if(DTB>9 && DTB<=10)
            printf("Xuat sac");
    else
        printf("Khong hop le");
    return 0;
}
