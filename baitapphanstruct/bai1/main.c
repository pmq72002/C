#include <stdio.h>
#include <stdlib.h>

struct mathang
{
    char tenhang[30];
    int dongia;
    int soluong;
    int thanhtien;
}mh;


int main()
{
    int i;
    struct    mathang a[100];
    int n,tong=0;
    do{
        printf("nhap so mat hang: ");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1;i<=n;i++)
    {
    printf("nhap ten mat hang: ");
    fflush(stdin);
    gets(a[i].tenhang);
    printf("nhap so don gia: ");
    scanf("%d", &a[i].dongia);
    printf("nhap so luong: ");
    scanf("%d", &a[i].soluong);
    a[i].thanhtien=a[i].soluong*a[i].dongia;
    tong+=a[i].thanhtien;
    }
    printf("\t\t\t\t\tSO LIEU BAN HANG\n");
    printf("\tSTT\t\tTen Hang\tDon gia\t\tSo luong\tThanh tien\n");

    for(i=1;i<=n;i++)
    {

    }

    for(int i=1;i<=n;i++)
    {
        printf("\t%d",i);
        printf("\t\t %s \t\t %d \t\t %d \t\t %d", a[i].tenhang,a[i].dongia,a[i].soluong,a[i].thanhtien);
        printf("\n");
    }
    printf("\n\t\t\t\t\t\t\t\tTong tien %d",tong);
}
