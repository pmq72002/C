#include<stdio.h>
#include<conio.h>

int main()
{
int n,i,s,m;
int a=1;

printf("Nhap mot so bat ky: ");
scanf("%d",&n);
while(n>0)
{
    m=n%2;
    s=s+(a*m);
    n=n/2;
    a=a*10;
    printf("%d",m);
}

printf("\na= %d\n",s);
return 0;
}
