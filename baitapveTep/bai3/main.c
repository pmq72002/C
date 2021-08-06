#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Ten_hang[50];
    int Don_gia;
    int So_luong;
    int Thanh_tien;
}solieu;



int main()
{
    FILE *f;
    //Mhap va ghi
    int n;
    printf("Nhap so hang hoa: ");fflush(stdin);scanf("%d",&n);
    solieu a[100],b[100];
    f=fopen("SO_LIEU.C","wb");
    fwrite(&n,sizeof(int),1,f);
    for(int i=0;i<n;i++)
    {
        printf("\nNhap du lieu hang hoa thu %d",i+1);
        printf("\nNhap ten hang: ");fflush(stdin);gets(a[i].Ten_hang);
        printf("\nNhap don gia: ");fflush(stdin);scanf("%d",&a[i].Don_gia);
        printf("\nNhap so luong: ");fflush(stdin);scanf("%d",&a[i].So_luong);
        a[i].Thanh_tien=a[i].Don_gia*a[i].So_luong;

        fwrite(&a[i],sizeof(a),1,f);
    }
    fclose(f);

    //Doc
    f=fopen("SO_LIEU.C","rb");
    fread(&n,sizeof(int),1,f);
    printf("-----------------------SO LIEU BAN HANG-----------------------");
    printf("\n%5s%15s%10s%10s%10s","STT","TEN HANG","DON GIA","SO LUONG","THANG TIEN");
    for(int i=0;i<n;i++)
    {
        fread(&b[i],sizeof(b),1,f);
        printf("\n%5d%15s%10d%10d%10d",i+1,b[i].Ten_hang,b[i].Don_gia,b[i].So_luong,b[i].Thanh_tien);
    }
    fclose(f);
    return 0;
}
