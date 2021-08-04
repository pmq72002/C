//Bài 6: Viết chương trình kiểm tra 1 số có là số hoàn hảo không? (Số hoàn hảo là số nguyên dương có tổng các ước bằng 2 lần nó.
//(VD số 6 có các ước 1, 2, 3, 6 và tổng 1 + 2 + 3 + 6 = 12 (bằng 2 lần 6)).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int tonguoc;
    tonguoc=0;

    do{
    printf("Nhap 1 so bat ki: ");
    scanf("%d",&n);
    }while(n<0); //neu nhap so am thi phai nhap lai

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            tonguoc+=i;
        }
    }
        if(tonguoc==2*n)
        {
            printf("Day la so hoan hao");
        }else
            {
        printf("Day khong phai la so hoan hao");
            }
    return 0;
}
