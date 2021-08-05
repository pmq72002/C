#include <stdio.h>
#include <stdlib.h>

 void nhapXau(char a[])
 {
     fflush(stdin);
     gets(a);
 }
 void xuatXau(char a[])
 {
     puts(a);
 }
int main()
{
    char s1[20];
    char s2[20];
    printf("\nNhap xau s1: ");
    nhapXau(s1);
    printf("\nNhap xau s2: ");
    nhapXau(s2);
    printf("s1: ");
    puts(s1);
    printf("s2: ");
    puts(s2);

    return 0;
}
