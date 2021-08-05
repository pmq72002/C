#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char tenSach[50];
    char tenTacGia[30];
    char NXB[30];
    int namXB;
    int soluong;
    int giaban;
}Book;
typedef struct node
{
    Book info;
    struct node *Next;
}Node;

Node *Head; //con trỏ kiểm soát danh sách

Node *GetNode(Book x)
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
    {
        printf("Out of memory");
    }
    p->info=x;
    p->Next=NULL;
    return p;
}
void InsertEnd(Node *new_node)
{
    Node *p;
    if(Head==NULL)
    {
        Head=new_node;
    }else{
        p=Head;
        while(p->Next!=NULL)
            p=p->Next;
            p->Next=new_node;
        }
}

void nhapThongtin(int n)
{
    Node *p;
    Book a;
    Head=NULL;
    int i=0;

    while(1)
    {
        printf("\n\n\nNhap ten sach: ");fflush(stdin);gets(a.tenSach);
        printf("\nNhap ten tac gia: ");fflush(stdin);gets(a.tenTacGia);
        printf("\nNhap nha xuat ban: ");fflush(stdin);gets(a.NXB);
        printf("\nNhap nam xuat ban: ");fflush(stdin);scanf("%d",&a.namXB);
        printf("\nNhap so luong: ");fflush(stdin);scanf("%d",&a.soluong);
        printf("\nNhap gia ban: ");fflush(stdin);scanf("%d",&a.giaban);
        p=GetNode(a);
        InsertEnd(p);
        i++;
        if(i==n) break;
    }
}
void inThongtin()
{
    Node *p;
    p=Head;
    printf("--------------------------------------------BOOK LIST--------------------------------------------\n");
    printf("\n|%20s|%20s|%20s|%10s|%10s|%10s|","NAME","AUTHOR","PUB COM","PUB YEAR","AMOUNT","PRICE");
    while(p!=NULL)
    {
    printf("\n|%20s|%20s|%20s|%10d|%10d|%10d|",p->info.tenSach,p->info.tenTacGia,p->info.NXB,p->info.namXB,p->info.soluong,p->info.giaban);
        p=p->Next;
    }
}


//thông tin về cách quyển sách được xuất bản bởi nhà xuất bản Springer.
Node *Search(char *x)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&(strcmp(p->info.NXB,x)!=0))
        p=p->Next;
    return p;
}


void authorSPRINGER(char *NXB)
{
    Node *p;

    p=Search(NXB);
    if(p==NULL)
    {
        printf("\n=================================>Khong co NXB nao ten Springer<=================================");
    }else{
        printf("\n|%20s|%20s|%20s|%10s|%10s|%10s|","NAME","AUTHOR","PUB COM","PUB YEAR","AMOUNT","PRICE");
        printf("\n|%20s|%20s|%20s|%10d|%10d|%10d|",p->info.tenSach,p->info.tenTacGia,p->info.NXB,p->info.namXB,p->info.soluong,p->info.giaban);
    }
}


//thông tin về những quyển sách có giá bán < 10.000
Node *search(int y)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&p->info.giaban>10.000)
        p=p->Next;
    return p;
}
void bookPrice(int price)
{
    Node *p;
    p=search(price);
    if(p==NULL)
    {
        printf("\n==================================>Khong co sach nao duoi 10.000<=================================");
    }else{
        printf("\n|%20s|%20s|%20s|%10s|%10s|%10s|","NAME","AUTHOR","PUB COM","PUB YEAR","AMOUNT","PRICE");
        printf("\n|%20s|%20s|%20s|%10d|%10d|%10d|",p->info.tenSach,p->info.tenTacGia,p->info.NXB,p->info.namXB,p->info.soluong,p->info.giaban);

}
}

//tim price nho nhat va lon nhat
Node *search_Min(int MinP)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&p->info.giaban!=MinP)
        p=p->Next;
    return p;
}
void MinPrice(int n)
{
    Node *p,*q;
    p=Head;
    int MinP=p;
    while(p!=NULL)
    {

        MinP=MinP<p->info.giaban?MinP:p->info.giaban;
        p=p->Next;
    }
    printf("%d",MinP);
    q=search_Min(MinP);
    printf("\n\n\nTen dau sach co gia tri thap nhat la: ");
    printf(q->info.tenSach);
}

void MaxPrice(int n)
{
    Node *p,*q;
    p=Head;
    int MaxP=p;
    while(p!=NULL)
    {

        MaxP=MaxP>p->info.giaban?MaxP:p->info.giaban;
        p=p->Next;
    }
    printf("\n\n\n%d",MaxP);
}
int main()
{
    int n;
    printf("Nhap so luong dau sach: ");
    fflush(stdin);
    scanf("%d",&n);

    nhapThongtin(n);
    inThongtin();
    printf("\n\n\n\n---------------Thong tin ve cac quyen sach duoc xuat ban boi nha xuat ban Springer---------------");
    authorSPRINGER("Springer");
    printf("\n\n\n\n---------------------------Thong tin ve cac quyen sach gia duoi 10.000---------------------------");
    bookPrice(10.000);

}
