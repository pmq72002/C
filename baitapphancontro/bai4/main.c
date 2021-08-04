#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={2,3,4,1,7,8,9,5,6,10};
    int i,temp;
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
    printf("thu tu tang dan: ");
         for(i=0;i<10;i++)
         {
             printf("%3d",*(a+i));
         }
    return 0;
}
