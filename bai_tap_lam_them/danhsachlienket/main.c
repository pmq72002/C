#include <stdio.h>
#include <stdlib.h>
#include<string.h>;
typedef struct
{
    char name[30];
    long id;
    float gpa;
}Student;

typedef struct node
{
    Student info;
    struct node *Next;
}Node;

Node *Head; //con trỏ kiểm soát danh sách

Node *GetNode(Student x)
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

//hàm chèn 1 node vào cuối danh sách

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

//Tạo danh sách

void Create_list()
{
    Node *p;
    char C;
    Student a;
    int i=1;
    Head=NULL;
    while(1)
    {
        printf("Nhap thong tin cho sinh vien thu %d",i);
        printf("\nName: ");fflush(stdin);gets(a.name);
        printf("\nId: ");fflush(stdin);scanf("%d",&a.id);
        printf("\nGpa: ");fflush(stdin);scanf("%f",&a.gpa);
        p=GetNode(a);
        InsertEnd(p);
        i++;
        printf("Ban co muon nhap tiep khong? (Y/N) ");
        fflush(stdin);scanf("%c",&C);
        if(C=='N'||C=='n') break;
    }
}


void Print_list()
{
    Node *p;
    int i=1;
    p=Head;
    printf("\n-----------------------LIST-----------------------");
    printf("\n|%15s|%15s|%15s|%15s|","STT","HO TEN","ID","GPA");
    while(p!=NULL)
    {
        printf("\n|%15d|%15s|%15d|%15.2f|",i,p->info.name,p->info.id,p->info.gpa);
        p=p->Next;
        i++;
    }

}


//Tìm kiếm sinh viên có mã ID

Node *Search_Id(long idInput)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&(p->info.id!=idInput))
        p=p->Next;
    return p;
}


//Hàm chèn 1 student vào sau 1 Student có id cho trước

void Insert_Id(long id)
{
    Node *p,*q;
    Student a;
    p=Search_Id(id);
    if(p==NULL)
    {
        printf("Khong co sinh vien co id nhap vao");
    }else{
        printf("Nhap thong tin cho sinh vien moi: \n");
        printf("\nName: ");fflush(stdin);gets(a.name);
        printf("\nId: ");fflush(stdin);scanf("%d",&a.id);
        printf("\nGpa: ");fflush(stdin);scanf("%f",&a.gpa);
        q=GetNode(a);
        q->Next=p->Next;
        p->Next=q;
        }
}

//Tìm kiếm sinh viên theo tên

Node *Search_Name(char *x)
{
    Node *p;
    p=Head;
    while((p!=NULL)&&(strcmp(p->info.name,x)!=0))
        p=p->Next;
    return p;
}

void Insert_Name(char *Name)
{
    Node *p,*q;
    Student a;
    p=Search_Name(Name);
    if(p==NULL)
    {
        printf("Khong co sinh vien co ten nhap vao");
    }else{
        printf("Nhap thong tin cho sinh vien moi: \n");
        printf("\nName: ");fflush(stdin);gets(a.name);
        printf("\nId: ");fflush(stdin);scanf("%d",&a.id);
        printf("\nGpa: ");fflush(stdin);scanf("%f",&a.gpa);
        q=GetNode(a);
        q->Next=p->Next;
        p->Next=q;
        }
}

//
    void IDorNAME(long id)
{
    char cachChen[10];
    char name[30];
    printf("\nChon cach tim (id/name): ");
                fflush(stdin);scanf("%s",&cachChen);
                if(strcmp("id",cachChen)==0)
                {
                    printf("Nhap id can chen them: ");
                    fflush(stdin);scanf("%d",&id);
                    Insert_Id(id);
                }
                else if (strcmp("name",cachChen)==0)
                    {
                        printf("Nhap ten can chen them: ");
                        fflush(stdin);scanf("%s",&name);
                        Insert_Name(name);
                    }
}

//Xóa sinh viên
void idORnameDEL(long id)
{
    char cachXoa[10];
    char name[30];
    printf("\nChon cach tim (id/name): ");
                fflush(stdin);scanf("%s",&cachXoa);
                if(strcmp("id",cachXoa)==0)
                {
                    printf("Nhap id can xoa : ");
                    fflush(stdin);scanf("%d",&id);
                    delete_List_Id(id);
                }
                else if (strcmp("name",cachXoa)==0)
                    {
                        printf("Nhap ten can xoa : ");
                        fflush(stdin);scanf("%s",&name);
                        delete_List_Name(name);
                    }
}
// xóa theo id
void delete_List_Id(long id)
{

    Node *p,*q;

    p=Search_Id(id);

    if(p==NULL)
    {
        printf("Khong co sinh vien nay");
    }else{
        if(p==Head)
        {
            Head=Head->Next;
        }else
        {
            q=Head;
            while(q->Next!=p) q=q->Next;
                q->Next=p->Next;

        }
        p->Next=NULL;
        free(p);
     }
}

void delete_List_Name(char *name)
{

    Node *p,*q;

    p=Search_Name(name);

    if(p==NULL)
    {
        printf("Khong co sinh vien nay");
    }else{
        if(p==Head)
        {
            Head=Head->Next;
        }else
        {
            q=Head;
            while(q->Next!=p)
                q=q->Next;
                q->Next=p->Next;

        }
        p->Next=NULL;
        free(p);
     }
}

int main()
{
    long id;
    char name[30];
    int option;
do{
    printf("\n\n\n-----------------------MENU-----------------------");
    printf("\n1. Tao danh sach sinh vien");
    printf("\n2. Hien thi danh sach sinh vien");
    printf("\n3. Chen them mot sinh vien vao danh sach");
    printf("\n4. Xoa mot sinh vien khoi danh sach");
    printf("\n5. Ket thuc");

    printf("\n\nNhap lua chon: ");
    fflush(stdin);scanf("%d",&option);


        switch(option)
    {
    case 1:
        {
            Create_list();
            break;
        }
    case 2:
        {
            Print_list();
            break;
        }
    case 3:
        {
            IDorNAME(id);
            break;
        }
    case 4:
        {
            idORnameDEL(id);
            break;
        }
    case 5:
        {
            exit(1);
            break;
        }
    default:
        {
            printf("khong co lua chon nay");
            break;
        }
    }
}while(option!=5);


    return 0;
}
