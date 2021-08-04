//Bài 4:Tìm tổng của các số lẻ từ 1 -> 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,S;
    S=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            S+=i;
        }
    }
    printf("Tong S = %d",S);
    return 0;
}
