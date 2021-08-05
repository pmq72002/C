#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,n,S;
    char a[100];

    do{
        printf("Nhap mot so nguyen duong n bat ki: ");
    scanf("%d",&n);
    }while(n<0);

        for(i=0;n>0;i++){
        a[i] = n%2;
        n=n/2;
    }
    printf("Ket qua sau chuyen doi sang he 2 la: ");
    for( int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}
