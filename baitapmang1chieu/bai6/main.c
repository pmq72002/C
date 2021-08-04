#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1, -2, 5, -6, 4, 7, 8 , -6, 3, -10};
    printf("a[10]={1, -2, 5, -6, 4, 7, 8 , -6, 3, -10}");
    printf("\n\nsau khi cac gia tri am bien thanh 0\n\na[10]=");
    for(int i=0;i<10;i++)
    {
        if(a[i]<0)
        {
            a[i]=0;
        }
        printf("%d ", a[i]);
    }

    return 0;
}
