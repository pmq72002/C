#include <stdio.h>
#include <stdlib.h>

void doicoso(char a[100],int n, int coso)
{
    int i;
    if(coso!=16)
    {
        for(i=0;n>0;i++){
        a[i] = n%coso;
        n=n/coso;
    }
    printf("Ket qua sau chuyen doi sang he %d la: ",coso);
    for( int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}else // chuyển sang hệ 16
    {
         for(i=0;n>0;i++){
        {
            a[i] = n%coso;

            if(a[i]==1)
            {
                a[i]='1';
            }else
                if(a[i]==2)
            {
                a[i] = '2';
            }else
                if(a[i]==3)
            {
                a[i] = '3';
            }else
                if(a[i]==4)
            {
                a[i] = '4';
            }else
                if(a[i]==5)
            {
                a[i] = '5';
            }else
                if(a[i]==6)
            {
                a[i] = '6';
            }else
                if(a[i]==7)
            {
                a[i] = '7';
            }else
                if(a[i]==8)
            {
                a[i] = '8';
            }else
                if(a[i]==9)
            {
                a[i] = '9';
            }
            else
                if(a[i]==10)
            {
                a[i]= 'A';
            }else
                if(a[i]==11)
                {
                    a[i]='B';
                }else
                if(a[i]==12)
                {
                    a[i]='C';
                }else
                if(a[i]==13)
                {
                    a[i]='D';
                }else
                if(a[i]==14)
                {
                    a[i]='E';
                }else
                if(a[i]==15)
                {
                    a[i]='F';
                }
                n=n/coso;
        }
    }
    printf("ket qua sau chuyen doi sang he %d la: ",coso);
    for( int j=i-1;j>=0;j--)
    {
        printf("%c", a[j]);
    }
}
}
int main()
{
    int n, coso;
    char a[100];
    do{
    printf("Nhap mot so nguyen duong n bat ki: ");
    scanf("%d",&n);
    }while(n<0);
    printf("Can chuyen sang he :");
    scanf("%d",&coso);
    doicoso(a,n,coso);
    return 0;
}
