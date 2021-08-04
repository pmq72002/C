#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,3,5,7,9};
    int b[5]={2,4,6,8,12};
    int i=0,iA=0,iB=0,k=0,c[10];

    for(i=0;i<10;i++)
    {
        if(iA<5&&iB<5)
        {
            if(a[iA]>b[iB])
            {
            c[i]=b[iB];
            iB++;
            }else{
            c[i]=a[iA];
            iA++;
            }
        }else
            if(iB==5){
                c[i]=a[iA];
                iA++;
            }else{
                c[i]=b[iB];
                iB++;
            }
}
for(i=0;i<10;i++)
    {
        printf("%4d",c[i]);
    }
    return 0;
}
