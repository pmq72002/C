#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={1,10,2,4,6,7,8,9,5,3};
    int temp,i;
    for( i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
    {
        if(*(a+i)<*(a+j))
        {

            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
        }

    }

         printf("gia tri lon nhat: %d",*a);
    for( i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
    {
         if(*(a+i)>*(a+j))
        {

            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
        }

    }
         printf("\ngia tri nho nhat: %d",*a);

    return 0;
}
