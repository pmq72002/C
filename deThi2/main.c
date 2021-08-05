#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int so_bao_danh;
    char ho_ten[30];
    float diem_toan;
    float diem_ly;
    float diem_tieng_anh;
    float tong_diem;
}Student;

typedef struct node
{
    Student info;
    struct node *Next;
}Node;

Node *Head;

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
    char C;
    Student a;
    int i=1;
    Head=NULL;
    while(1)
    {
    printf("\nNhap hoc sinh thu %d",i);
    printf("\nNhap SBD: "); fflush(stdin);scanf("%d",&a.so_bao_danh);
    printf("\nNhap ho ten: ");fflush(stdin);gets(a.ho_ten);
    printf("\nNhap diem toan: ");fflush(stdin);scanf("%f",&a.diem_toan);
    printf("\nNhap diem ly: ");fflush(stdin);scanf("%f",&a.diem_ly);
    printf("\nNhap diem tieng anh: ");fflush(stdin);scanf("%f",&a.diem_tieng_anh);
    a.tong_diem=a.diem_toan+a.diem_ly+a.diem_tieng_anh;
    p=GetNode(a);
    Insert_List(p);
    i++;
    printf("Ban co muon nhap tiep khong? (Y/N) ");
        fflush(stdin);scanf("%c",&C);
        if(C=='N'||C=='n'){break;};
    }

}

void Print_List()
{
    Node *p;
    int i=1;
    p=Head;
     printf("\n\t\tDANH SACH DIEM THI THPT");
     printf("\n%4s%15s%15s%15s%15s%15s%10s","STT","SBD","Ho ten","Diem toan","Diem lu","Diem tieng anh","Tong diem");
    while(p!=NULL)
    {
    printf("\n%4d%15d%15s%15.2f%15.2f%15.2f%10.2f",i,p->info.so_bao_danh,p->info.ho_ten,p->info.diem_toan,p->info.diem_ly,p->info.diem_tieng_anh,p->info.tong_diem);
    p=p->Next;
    i++;
    }
}


int main()
{
    int opt;
    do
    {
    printf("\n-------------------------------MENU-------------------------------");
    printf("\n1. Tao danh sach thi sinh");
    printf("\n2. Hien thi danh sach thi sinh");
    printf("\n3. Sap xep diem thi");
    printf("\n4. Ket thuc");

    printf("\n Moi ban nhap lua chon: ");fflush(stdin);scanf("%d",&opt);
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
                //Sort_Sum();
                break;
            }
        case 4:
            {
                exit(1);
                break;
            }
        default:
            {
                printf("Khong co lua chon nay");
                break;
            }
        }
    }while(opt!=4);
    return 0;
}
