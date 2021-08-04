#include <stdio.h>
#include <stdlib.h>
const int MAX = 50;
int main()
{
    int A[MAX];
    int n,i;
    printf("nhap n: ");
    scanf("%d",&n);
    for(i =0;i<n;i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        printf("%d",A[i]);
    }
    return 0;
}
