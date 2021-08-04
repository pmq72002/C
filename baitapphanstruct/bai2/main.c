#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char ten[20];
	char ma[10];
	int namsinh;
	float dtb;
	int songaynghi;
}SinhVien;
void NhapMang(SinhVien a[] &n)
{
	do{
		printf("Cho biet so Sinh vien: ");
		scanf("%d", &n);
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		printf("Thong tin Sinh vien thu %d la: \n", i);
		printf("Ten: \n");
		fflush(stdin);
		gets(a[i].ten);
		printf("Ma so: \n");
		fflush(stdin);
		gets(a[i].ma);
		printf("Nam sinh :\n");
		scanf("%d", &a[i].namsinh);
		printf("Diem Trung Binh: \n");
		scanf("%f", &a[i].dtb);
		printf("So ngay nghi: \n");
		scanf("%d", &a[i].songaynghi);
	}
}
int main()
{

