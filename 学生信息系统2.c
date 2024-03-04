#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10000

typedef struct
{   
    char name[8];
    int chinese;
    int math;
    int sum;
    int id;
}student;


void add(student stu[]);
void show(student stu[],int i);
void modify(student stu[]);
void HH();
void delete(student stu[]);
void find(student stu[]);
void sort(student stu[]);

int n=0;//用来记录学生的数量


int main(){
    student stu[N];
    int choice;
    do{
        printf("Enter your choice:\n");
        printf("1. Add student information\n");
        printf("2. Show all student information\n");
        printf("3. Modify student information\n");
        printf("4. Delete student information\n");
        printf("5. Find student information\n");
        printf("6. Sort student information\n");
        printf("0. Exit\n");

        scanf("%d",&choice);
    
        switch(choice){
            case 1:
                printf("Add student informantion.");
                add(stu);
                break;

            case 2:
                printf("Show all student inforamantion.\n");
                HH();
                for(int i=0;i<n;i++){
                    show(stu,i);
                }
                break;

            case 3:
                printf("Modify student informantion.");
                modify(stu);
                break;

            case 4:
                printf("Dleter student informantion.");
                delete(stu);
                break;

            case 5:
                printf("Find studnet informantion.");
                find(stu);
                break;
            case 6:
                printf("Sort student informantion.");
                sort(stu);
                break;

            case 0:
                printf("Existing....\n");
                exit(0);

            default:
                printf("You input information error.");
                break;

                
        }
        }while(choice != 0);
        return 0;
    }

void add(student stu[]){
    int i,id=0;//i作为循环变量，id用来存储新学号
    char quit;//保存是否退出的选择

    do{
        printf("ID:");
        scanf("%d",&id);
        for(i=0;i<n;i++){ //遍历数组，看看有没有这个id
            if(id == stu[i].id){
                printf("id exist! ");
                return ;
            }
        }

        stu[i].id = id;
        printf("name:");
        scanf("%s",&stu[i].name);
        printf("chinese:");
        scanf("%d",&stu[i].chinese);
        printf("math:");
        scanf("%d",&stu[i].math);
        stu[i].sum = stu[i].chinese + stu[i].math;
        n++;
        printf("add?(Y/N)");
        scanf("\t%c",&quit);

    }while (quit != 'N' && quit != 'n');

}

void show(student stu[],int i){//用来展示学生的个人信息
    printf("%-10d",stu[i].id);
    printf("%-10s",stu[i].name);
    printf("%-10d",stu[i].chinese);
    printf("%-10d",stu[i].math);
    printf("%-10d\n",stu[i].sum);
}

void modify(student stu[]){
    char name[8],ch;
    int i;
    printf("change recored of student: ");
    printf("Please input student name:");
    scanf("%s",&name);
    for(i=0;i<n;i++){
        if(strcmp(name,stu[i].name)==0){
            getchar();
            printf("Find the record of the student, as shown below");
            HH();
            show(stu,i);
            printf("Do you want change? (Y/N)?\n");
            scanf("%c",&ch);
            if(ch == 'Y' || ch == 'y'){
                getchar();
                printf("name:");
                scanf("%s",&stu[i].name);
                printf("chinese:");
                scanf("%d",&stu[i].chinese);
                printf("math:");
                scanf("%d",&stu[i].math);
                stu[i].sum = stu[i].chinese + stu[i].math;
                printf("Over.\n");
            }
            return;
        }
    }
    printf("No student! Please try again.");
}

void HH(){
   printf("%-10s%-10s%-10s%-10s%-10s\n", "id", "name", "chinese", "math", "sum");

}

void delete(student stu[])
{  
    int id,i;
    char ch;
    printf("Delete student inforamtion.\n");
    printf("Please enter ID:");
    scanf("%d",&id);
    for(i=0;i<n;i++){
        if(id == stu[i].id){
            getchar();
            printf("Get student id:");
            HH();
            show(stu,i);
            printf("Do you want delete this information.(Y/N)?\n");
            scanf("%c",&ch);
            if(ch == 'Y' || ch == 'y'){
                for(; i < n - 1; i++){ // 防止访问数组越界，所以循环到n-2
                    stu[i] = stu[i + 1]; // 将后面的元素前移
                }
                n--; // 完成删除操作后，减少学生总数
                printf("Delete successful!\n");
                break; // 成功删除后跳出循环
            }
            else{
                printf("Delete cancelled.\n");
                break; // 用户选择取消删除，跳出循环
            }
        
            
        }
    } 
    printf("No student! Please try again.");
}

void find(student stu[]){
    char name[8];
    int i;
    printf("Welcome to find id system:\n");
    printf("Please enter you want search id: ");
    scanf("%s",name);
    for(i=0;i<n;i++){
        if(strcmp(name,stu[i].name)==0){
            printf("Find it!");
            HH();
            show(stu,i);
            return;
        }
    }
    printf("No student! Please try again.");
    
}

void sort(student stu[]){
    int i,j;
    student t;
    printf("Sort by total score:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(stu[i].sum < stu[j].sum){
                t = stu[i];
                stu[i] = stu[j];
                stu[j] = t;
            }
        }
    }
    printf("Sort fllow:\n");
    for(i=0;i<n;i++){
        show(stu,i);
    }
}
