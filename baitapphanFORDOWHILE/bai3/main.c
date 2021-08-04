//Bài 3:In ra các số dương chẵn từ 1 đến 20 trên cùng 1 dòng, cách nhau bởi một tab.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            printf("\t");
        }
    }
    return 0;
}
