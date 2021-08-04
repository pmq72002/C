#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],i,n;
    float tong=0,tongD=0,tongA=0;
    float tbc=0,tbcD=0,tbcA=0;
    float demA=0,dem=0;
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&A[i]);
        tong+=A[i];
        tbc = tong/n;
        if(A[i]>0)
        {
            tongD+=A[i];
            demD++;
            tbcD=tongD/demD;
        }else{
            tongA+=A[i];
            demA++;
            tbcA=tongA/demA;
            }
    }
    printf("\ntong cac so nguyen duong = %2.0f", tongD);
    printf("\ntong cac so nguyen am = %2.0f", tongA);
    printf("\ntrung binh cong ca mang = %2.2f", tbc);
    printf("\ntrung binh cong cac so duong = %2.2f", tbcD);
    printf("\ntrung binh cong cac so am = %2.2f", tbcA);
    return 0;
}
