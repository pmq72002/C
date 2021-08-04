/*viet chuong trinh tao menu nhu sau:
yeu cau:
Chọn 1: In "Bạn đã chọn chức năng 1 trong menu"
Chọn 2: In "Bạn đã chọn chức năng 2 trong menu"
Chọn 3: Thoát khỏi chương trình
Chọn số bất kì: Bạn đã chọn sai mục trong menu
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------MENU--------------\n");
    printf("1.Giai phuong trinh bac nhat ax+b=0\n");
    printf("2.Giai phuong trinh bac 2\n");
    printf("3.Ket thuc\n");
    printf("\nMoi ban chon chuc nang trong menu: ");

    int select;
    scanf("%d",&select);
    switch(select)
    {
    case 1:
        printf("Ban da chon chuc nang 1 trong menu");
        break;
    case 2:
        printf("Ban da chon chuc nang 2 trong menu");
        break;
    case 3:
        printf("Thoat khoi chuong chinh");
        break;
    default:
        printf("Ban da chon sai muc trong menu");
        break;
    }
    return 0;
}
