#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool isString(char a[])
{
    for(int i=0;i<=strlen(a);i++)
    {
        if((isalpha(a[i])==0))
        {
            return false;
        }else{
        return true;
        }
    }
}

void inputChar(char a[])
{
    printf("Nhap xau: ");
    fflush(stdin);
    gets(a);
}

void isNum(char a[])
{

    if(isString(a)==false)
    {
        printf("\nBan nhap sai dinh dang\n");
    }else{
    printf("\nSo tu bat dau bang chu so la: ");
    int dem=0;
    if(a[0]<'0'||a[0]>'9')
    {
        printf("");
    }else{
        dem++;
    }
    for(int i=0;i<strlen(a);i++)
    {
    if(a[i]==' ')
    {
        if(a[i+1]<'0'||a[i+1]>'9')
        {
            printf("");
        }else{
        dem++;
        }
    }
    }
    printf("%d",dem);
}
}
int main()
{
    char a[100];
    inputChar(a);
    isNum(a);

    return 0;
}
