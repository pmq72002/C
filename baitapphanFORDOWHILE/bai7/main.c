//Bài 7:Viết chương trình tính S = 1 + 1/2 + 1/3 + … + 1/N
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
     float i,S;
     S = 0;
    printf("Nhap N de tinh 1/2 + 1/3+...+ 1/N   ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S = S + 1/i;
    }

    printf("S =%5.2f",S);
    return 0;
}
