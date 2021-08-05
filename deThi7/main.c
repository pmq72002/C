#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    long id;
    char hoten[30];
    char chucvu[50];
    char sdt[20];
}Staff;

typedef struct node
{
    Staff info;
    struct node *Next;
}Node;

Node *Head; // con tro kiem soat danh sach

Node *GetNode(Staff x)
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
    {
        printf("Out of memory");
    }
        p->info = x;
        p->Next = NULL;
        return p;

}

void Insert_List(Node *new_node)
{
    Node *p;
    if(Head==NULL)
    {
        Head=new_node;
    }else
    {
        p=Head;
        while(p->Next!=NULL)
            p=p->Next;
            p->Next=new_node;
    }
}

void Creat_List()
{
    Node *p;
    Staff a;
    char C;
    Head=NULL;
    int i=1;
    while(1)
    {
        printf("\n\nNhap thong tin nhan vien thu %d",i);
        printf("\nNhap ID: ");fflush(stdin);scanf("%d",&a.id);
        printf("\nNhap ho ten:");fflush(stdin);gets(a.hoten);
        printf("\nNhap chuc vu: ");fflush(stdin);gets(a.chucvu);
        printf("\nNhap SDT: ");fflush(stdin);gets(a.sdt);
        p=GetNode(a);
        Insert_List(p);
        i++;
        printf("\nBan co muon nhap tiep khong? (Y/N) ");
        fflush(stdin);scanf("%c",&C);
        if(C=='N'||C=='n') break;
    }

}

void Print_List()
{
    Node *p;
    int i=1;
    p=Head;
    printf("\n\t\t\tDANH SACH NHAN VIEN");
    printf("\n|%15s|%15s|%15s|%15s|","ID","Ho ten","Chuc vu","So DT");
    while(p!=NULL)
    {
    printf("\n|%15d|%15s|%15s|%15s|",p->info.id,p->info.hoten,p->info.chucvu,p->info.sdt);
    p=p->Next;
    i++;
    }
}

Node *Search(long idInput)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&(p->info.id!=idInput))
        p=p->Next;
        return p;
}

void Delete_Staff(long id)
{
    Node *p,*q;

    printf("\nNhap ID can xoa: ");
    fflush(stdin);scanf("%d",&id);

    p=Search(id);
    if(p==NULL)
    {
        printf("Khong co nhan vien nay");
    }else
    {
        if(p==Head)
        {
            Head=p->Next;
        }else
        {
            q=Head;
            while(q->Next!=p)
            {
                q=q->Next;
            }
            q->Next=p->Next;
        }
        p->Next=NULL;
        free(p);
    }
    Print_List();
}

int main()
{
    int opt;
    long id;
    do
    {

    printf("\n-------------------------------MENU-------------------------------");
    printf("\n1. Tao danh sach nhan vien");
    printf("\n2. Hien thi danh sach nhan vien");
    printf("\n3. Xoa nhan vien");
    printf("\n4. Ket thuc");
    printf("\n\nMoi ban nhap lua chon: "); scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            Creat_List();
            break;
        }
    case 2:
        {
            Print_List();
            break;
        }
    case 3:
        {
            Delete_Staff(id);
            break;
        }
    case 4:
        {
            exit(1);
            break;
        }
    default:
        {
            printf("\nBan nhap sai lua chon");
            break;
        }
    }
}while(opt!=4);
    return 0;
}
