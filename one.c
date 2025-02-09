#include<stdio.h>
#include<string.h>


//***************************************************8结构体
struct node
{
    int num_num;
    char book_name[50];
    double price;
    int num_time;
    char author[20];
    int num_year;
    int num_count;
};


//*************************************************定义结构体
void node()
{
    struct node s[50]={{1001,"C程序设计教程",49.90,56,"谭浩强",2023,34},
                       {1002,"电路",65.00,69,"邱关源",2022,22},
                       {1003,"视听说教程",53.00,46,"朱晓映",2020,65},
                       {1004,"长篇阅读",45.00,35,"郭杰克",2023,85},
                       {1005,"清欢",15.00,15,"林清玄",2020,56},
                       {1006,"C Primer Plus",108.00,22,"Stephen Prata",2023,32}};
}


//********************************************************登录
int login()
{
    void menu();
    char account[20];
    int password;
    int i=1;

    while(i <= 3)
    {
        printf("请输入账号:");
        scanf("%s",account);
        printf("\n");
        printf("请输入密码:");
        scanf("%d",&password);
        printf("\n");
        if(strcmp(account,"a")==0&&password==1)
        {
            menu();
            return 0;
        }
        printf("请重新输入:\n");
        i ++;
    }
    return 1;
}


//**********************************************************************************************主菜单
void menu()
{
    printf("******************************************************************\n");
    printf("                          1.查询图书\n");
    printf("                          2.借阅/归还图书\n");
    printf("                          3.录入/删除图书\n");
    printf("                          4.统计\n");
    printf("                          5.退出\n");
    printf("******************************************************************\n");
    printf("                     请输入您的选择: ");
}


//***************************************************************************************************子菜单1
void menu_1()
{
    printf("******************************************************************\n");
    printf("                          查询图书\n");
    printf("                          1.图书名查询\n");
    printf("                          2.图书编号查询\n");
    printf("                          3.作者查询\n");
    printf("                          4.收录年份查询\n");
    printf("                          5.返回上一级\n");
    printf("******************************************************************\n");
    printf("                     请输入您的选择: ");
}


//*****************************************************************************************************88子菜单2
void menu_2()
{
    printf("******************************************************************\n");
    printf("                          借阅/归还图书\n");
    printf("                          1.借阅图书\n");
    printf("                          2.归还图书\n");
    printf("                          3.返回上一级\n");
    printf("******************************************************************\n");
    printf("                     请输入您的选择: ");
}


//*******************************************************************************************************子菜单3
void menu_3()
{
    printf("******************************************************************\n");
    printf("                          录入/删除图书\n");
    printf("                          1.录入图书\n");
    printf("                          2.删除图书\n");
    printf("                          3.返回上一级\n");
    printf("******************************************************************\n");
    printf("                     请输入您的选择: ");
}


//**********************************************************************************************************子菜单4
void menu_4()
{
    printf("******************************************************************\n");
    printf("                          统计\n");
    printf("                          1.总数量\n");
    printf("                          2.已借出数量\n");
    printf("                          3.未借出数量\n");
    printf("                          4.总借阅次数\n");
    printf("                          5.返回上一级\n");
    printf("******************************************************************\n");
    printf("                     请输入您的选择: ");
}


//*********************************************************************************************************分支1
void branch_1(int a)
{
    int choice = a;
    char name[50];
    void node();
    node();
    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                printf("请输入要查询的图书名：\n");
                scanf("%s",name);
                //search_name(name);
                break;
            case 2:
                menu_2();
                scanf("%d",&choice);
                break;
            case 3:
                menu_3();
                scanf("%d",&choice);
                break;
            case 4:
                menu_4();
                scanf("%d",&choice);
                break;
            default:
                printf("无效的选项，请重新输入\n");
                break;
        }
        printf("\n请输入您的选择: ");
        scanf("%d", &choice);
    }
    printf("退出系统\n");
}


//**************************************************************************************8图书名查询
//void search_name(char name[])
//{




//}

//**************************************************************************8输入
int input(int num[])
{
    int count,i;
    printf("请输入元素个数：");
    scanf("%d",&count);
    printf("请输入数据：");
    for(i=0;i<count;i++)
        scanf("%d",&num[i]);
    return count;

}








//*************************************************************************主函数
int main()
{
    struct node s[50];
    int choice;
    int a;
    a=login();
    if(a==0)
    {
        scanf("%d",&choice);
        while (choice != 5)
        {
            switch (choice)
            {
                case 1:
                    menu_1();
                    scanf("%d",&choice);
                    break;
                case 2:
                    menu_2();
                    scanf("%d",&choice);
                    break;
                case 3:
                    menu_3();
                    scanf("%d",&choice);
                    break;
                case 4:
                    menu_4();
                    scanf("%d",&choice);
                    break;
                default:
                    printf("无效的选项，请重新输入\n");
                    break;
            }
            printf("\n请输入您的选择: ");
            scanf("%d", &choice);
        }
        printf("退出系统\n");
    }
    else
    {
        printf("退出系统\n");
    }


    return 0;
}