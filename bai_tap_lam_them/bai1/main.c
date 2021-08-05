#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool isSquare(int n)
{
    int i = 1;
    while (i < n / 2)
    {
        if (i * i == n)
            return true;
        i++;
    }
    return false;
}
void bai1()
{
    int count = 0;
    for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++)
            if (isSquare(i * j))
                count++;
    int sum = count * pow(10, 5);
    printf("%d", sum);
}


int main()
{
    bai1();
}
