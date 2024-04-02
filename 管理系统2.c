#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct COURSE
{
    char course_name[50];
    double course_ave;
    char max_name[20];
    double course_max;
    int rank[5];
}CLASS;

typedef struct course
{
    char course_name[50];
    double course_score;
}COU;

typedef struct student
{
    int ID;
    char name[20];
    double ave;
    double sum;
    COU course[20];
    struct student *next;
}STU;

int menu();
STU *Creat_student1(STU *head);
STU *Creat_student2(STU *head);
STU *Del_student1(STU *head);
STU *Del_student2(STU *head);
STU *Insert_student1(STU *head);
STU *Insert_student2(STU *head);
STU *Search_student(STU *head);
STU *Search_student2(STU *head);
void *Rank_student(STU *head);
void BubbleSort1(STU *head,int score_num);
void BubbleSort2(STU *head);
void print1(STU *head);
void print2(STU *head);
CLASS class_num[20];
int course_num;
int stu_num;

int main(){
    int select,op;
    STU *head;
    STU *p;
    head = NULL;
    while(true){
        system("CLS");
        select = menu();
        if(select == 0){
            break;
        }
        switch(select){
            case 1:
                system("CLS");
                head = Creat_student1(head);
                break;

            case 2:
                system("CLS");
                head = Creat_student2(head);
                break;

            case 3:
                system("CLS");
                if(head == NULL){
                    printf("请先输入学生信息!\n");
                }
                else{
                    system("CLS");
                    p = head -> next;
                    print1(head);
                }
                break;

            case 4:
                system("CLS");
                if(head == NULL){
                    printf("请先输入学生信息!\n");
                }
                else{
                    system("CLS");
                    p = head -> next;
                    print2(head);
                }
                break;

            case 5:
                system("CLS");
                printf("请输入删除方式:\n");
                printf("1. 按学号删除\n");
                printf("2.按姓名删除.\n");
                scanf("%d",&op);
                if(op == 1){
                    head = Del_student1(head);
                }
                else{
                    head = Del_student2(head);
                }
                break;

            case 6:
                system("CLS");
                printf("请选择插入的方式:\n");
                printf("1. 按学号插入\n");
                printf("2. 按姓名插入\n");
                scanf("%d",&op);
                if(op == 1){
                    head = Insert_student1(head);
                }
                else{
                    head = Insert_student2(head);
                }
                break;

            case 7:
                system("CLS");
                printf("请选择查找方式\n");
                peinrf("1. 按照学号查找.\n");
                printf("2. 按照姓名查找\n");
                scanf("%d",&op);
                if(op == 1){
                    head =Search_student(head);
                }
                else{
                    head = Search_student2(head);
                }
                break;

            case 8:
                system("CLS");
                Rank_student(head);
                break;
        }

        printf("请按enter继续\n");
        getchar();
    }
}

int menu(){
    int choice;
    printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
    printf("~*--------小型教务管理系统---------*~\n");
    printf("~*       1.从键盘添加学生信息      *~\n");
    printf("~*       2.从文件添加学生信息      *~\n");
    printf("~*       3.显示学生信息到屏幕      *~\n");
    printf("~*       4.显示学生信息到文件      *~\n");
    printf("~*       5.删除学生信息            *~\n");
    printf("~*       6.插入学生信息            *~\n");
    printf("~*       7.查找学生信息            *~\n");
    printf("~*       8.成绩排名                *~\n");
    printf("~*       0.退出                    *~\n");
    printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
    printf("请输入选项:");
    scanf("%d",&choice);
    getchar();
    return choice;
}

STU *Creat_student1(STU *head){
    STU *p1 = NULL;
    STU *p2 = NULL;
    int i,j,k;
    head = (STU *) malloc (sizeof(STU));
    p2 = head;
    printf("请先输入学生人数");
    scanf("%d",&stu_num);
    printf("请输入本次学生参加课程考试的数目:");
    scanf("%d",&course_num);
    getchar();
    printf("请输入本次各门课程考试的名称:\n");
    for(i=0;i<course_num;i++){
        printf("第 %d 门课程:",i+1);
        gets(class_num[j].course_name);
        scanf("%lf",&p1->course[j].course_score);
    }
}