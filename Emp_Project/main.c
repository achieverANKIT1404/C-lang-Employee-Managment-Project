#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct emp
{
    char fName[20];
    char lName[20];
    char place[35];
    char edu[30];
    int id,age;
    float sal;
};

int i,n,id1,store=0;
float tax;
struct emp e[100];

void add()
{
    for(i=store;i<store+n;i++)
    {
         printf("\n");
         printf("\t\tENTER EMPLOYEE %d DETAILS\n",i+1);
         printf("\n");
         printf("\t\tENTER ID = ",i+1);
         scanf("%d",&e[i].id);
         printf("\n");
         printf("\t\tENTER FIRST NAME = ",i+1);
         scanf("%s",&e[i].fName);
         printf("\n");
         printf("\t\tENTER LAST NAME = ",i+1);
         scanf("%s",&e[i].lName);
         printf("\n");
         printf("\t\tENTER AGE = ",i+1);
         scanf("%d",&e[i].age);
         printf("\n");
         printf("\t\tENTER EDUCATION = ",i+1);
         scanf("%s",&e[i].edu);
         printf("\n");
         printf("\t\tENTER PLACE = ",i+1);
         scanf("%s",&e[i].place);
         printf("\n");
         printf("\t\tENTER SALARY = ",i+1);
         scanf("%f",&e[i].sal);
         printf("\n");
    }
    store=store+n;
}
void search()
{
    printf("\t\tENTER ID = ");
    scanf("%d",&id1);
    for(i=0;i<n;i++)
    {
        if(id1==e[i].id)
        {
            printf("\t\tNAME:\t\t%s  %s\n",e[i].fName,e[i].lName);
            printf("\n");
            printf("\t\tID:\t\t%d\n",e[i].id);
            printf("\n");
            printf("\t\tAGE:\t\t%d\n",e[i].age);
            printf("\n");
            printf("\t\tEDUCATION:\t%s\n",e[i].edu);
            printf("\n");
            printf("\t\tPLACE:\t\t%s\n",e[i].place);
            printf("\n");
            printf("\t\tSALARY:\t\t%.2f Rs/-\n",e[i].sal);
        }
    }
}
void show()
{
    for(i=0;i<store;i++)
    {
        printf("\n");
        printf("\t\tNAME:\t  |\t%s %s\t  |\t\n",e[i].fName,e[i].lName);
        printf("\n");
        printf("\t\tID:\t  |\t%d          \t  |\t\n",e[i].id);
        printf("\n");
        printf("\t\tAGE:\t  |\t%d         \t  |\t\n",e[i].age);
        printf("\n");
        printf("\t\tEDUCATION:|\t%s      \t  |\t\n",e[i].edu);
        printf("\n");
        printf("\t\tPLACE:\t  |\t%s     \t  |\t\n",e[i].place);
        printf("\n");
        printf("\t\tSALARY:\t  |\t%.2f Rs/-\t  |\t\n",e[i].sal);
        printf("\n");
        printf("\t\t_________________##_________________\n");
    }
}
void update()
{
    int k=1,yesn,choice1;
    printf("\t\tENTER ID = ");
    scanf("%d",&id1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(id1==e[i].id)
        {
            printf("\t\tDO YOU REALLY WANT TO UPDATE ?\n");
            printf("\t\t1] YES\n");
            printf("\t\t2] NO\n");
            printf("\t\tCHOSE ANY ONE = ");
            scanf("%d",&yesn);
            if(yesn==1)
            {
                 printf("\t\tWHAT YOU WANT TO UPDATE ?\n");
                 printf("\n");
                 printf("\t\t1] FIRST NAME\n");
                 printf("\t\t2] LAST NAME\n");
                 printf("\t\t3] AGE\n");
                 printf("\t\t4] EDUCATION\n");
                 printf("\t\t5] PLACE\n");
                 printf("\t\t6] SALARY\n");
                 printf("\t\t0] CLEAR/EXIT\n");

                 while(k)
                 {
                     if(choice1!=0)
                     {
                         printf("\n");
                         printf("\t\t1] FIRST NAME\n");
                         printf("\t\t2] LAST NAME\n");
                         printf("\t\t3] AGE\n");
                         printf("\t\t4] EDUCATION\n");
                         printf("\t\t5] PLACE\n");
                         printf("\t\t6] SALARY\n");
                         printf("\t\t0] CLEAR/EXIT\n");
                     }
                     printf("\n");
                     printf("\t\tCHOSE WHICH YOU WANT TO UPDATE = ");
                     scanf("%d",&choice1);

                     switch(choice1)
                     {
                          case 1:
                          printf("\t\tPREVIOUS FIRST NAME IS:%s\n",e[i].fName,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW NAME = ");
                          scanf("%s",&e[i].fName);
                          printf("\n");
                          printf("\t\tFIRST NAME = %s",e[i].fName);
                          printf("\n");
                          break;

                          case 2:
                          printf("\t\tPREVIOUS LAST NAME IS:%s\n",e[i].lName,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW NAME = ");
                          scanf("%s",&e[i].lName);
                          printf("\n");
                          printf("\t\tLAST NAME = %s",e[i].lName);
                          printf("\n");
                          break;

                          case 3:
                          printf("\t\tPREVIOUS AGE IS:%d\n",e[i].age,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW AGE = ");
                          scanf("%d",&e[i].age);
                          printf("\n");
                          printf("\t\tAGE = %d",e[i].age);
                          printf("\n");
                          break;

                           case 4:
                          printf("\t\tPREVIOUS EDUCATION IS:%s\n",e[i].edu,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW EDUCATION = ");
                          scanf("%s",&e[i].edu);
                          printf("\n");
                          printf("\t\tEDUCATION = %s",e[i].edu);
                          printf("\n");
                          break;

                          case 5:
                          printf("\t\tPREVIOUS PLACE IS:%s\n",e[i].place,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW PLACE = ");
                          scanf("%s",&e[i].place);
                          printf("\n");
                          printf("\t\tPLACE = %s",e[i].place);
                          printf("\n");
                          break;

                          case 6:
                          printf("\t\tPREVIOUS SALARY IS:%.2f Rs/-\n",e[i].sal,i+1);
                          printf("\n");
                          printf("\t\tENTER NEW SALARY = ");
                          scanf("%f",&e[i].sal);
                          printf("\n");
                          printf("\t\tSALARY = %.2f Rs/-",e[i].sal);
                          printf("\n");
                          break;

                          case 0:
                          printf("\t\tCLEAR\EXIT\n");
                          k=0;
                          break;

                          default:
                          printf("\t\tINVALID CHOICE,TRY AGAIN..!\n");
                     }
                 }
            }
        }
    }
}
void tax_Sal()
{
    printf("\t\tENTER ID = ",i+1);
    scanf("%d",&id1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(id1==e[i].id)
       {
            printf("\n");
            if(e[i].sal<=10000)
            {
                printf("\t\tNO TAX..!\n");
            }
            else if(e[i].sal>10000 && e[i].sal<=20000)
            {
                printf("\t\t%s %s\n",e[i].fName,e[i].lName,i+1);
                printf("\n");
                printf("\t\tSALARY = %.2f Rs/-\n",e[i].sal);
                printf("\n");
                tax=(0.10*e[i].sal);
                printf("\t\tTAX = %.2f Rs/-",tax);
            }
            else if(e[i].sal>30000 && e[i].sal<=40000)
            {
                printf("\t\t%s %s\n",e[i].fName,e[i].lName,i+1);
                printf("\n");
                printf("\t\tSALARY = %.2f Rs/-\n",e[i].sal);
                printf("\n");
                tax=(0.20*e[i].sal);
                printf("\t\tTAX = %.2f Rs/-",tax);
            }
            else if(e[i].sal>50000 && e[i].sal<=100000)
            {
                printf("\t\t%s %s\n",e[i].fName,e[i].lName,i+1);
                printf("\n");
                printf("\t\tSALARY = %.2f Rs/-\n",e[i].sal);
                printf("\n");
                tax=(0.25*e[i].sal);
                printf("\t\tTAX = %.2f Rs/-",tax);
            }
            else
            {
                printf("\t\t%s %s\n",e[i].fName,e[i].lName,i+1);
                printf("\n");
                printf("\t\tSALARY = %.2f Rs/-\n",e[i].sal);
                printf("\n");
                tax=(0.30*e[i].sal);
                printf("\t\tTAX = %.2f Rs/-",tax);
            }
       }
    }

    void delet()
    {

    }

}
int main()
{
    system("COLOR 0E");
    int choice;
    i=1;
    printf("\n");
    printf("\t\t\t\t\tEMPLOYEE MANAGMENT SYSTEM\n\t\t\t\t\t\tOF\n");
    printf("\t\t\t\t     ^^^^^^^^INFOSYS COMPANY^^^^^^^^\n");
    printf("\n");
    printf("\t\t\t\t\t ********MENU********\n");
    printf("\t\t\t\t\t 1] ADD DETAILS\n");
    printf("\t\t\t\t\t 2] SEARCH DETAILS\n");
    printf("\t\t\t\t\t 3] SHOW DETAILS\n");
    printf("\t\t\t\t\t 4] UPDATE DETAILS\n");
    printf("\t\t\t\t\t 5] TAX ON SALARY DETAILS\n");
    printf("\t\t\t\t\t 0] CLEAR/EXIT\n");

    while(i)
    {
        if(choice!=0)
        {
            printf("\n");
            printf("\t\t\t\t\tEMPLOYEE MANAGMENT SYSTEM\n\t\t\t\t\t\tOF\n");
            printf("\t\t\t\t     ^^^^^^^^INFOSYS COMPANY^^^^^^^^\n");
            printf("\n");
            printf("\t\t\t\t\t ********MENU********\n");
            printf("\t\t\t\t\t 1] ADD DETAILS\n");
            printf("\t\t\t\t\t 2] SEARCH DETAILS\n");
            printf("\t\t\t\t\t 3] SHOW DETAILS\n");
            printf("\t\t\t\t\t 4] UPDATE DETAILS\n");
            printf("\t\t\t\t\t 5] TAX ON SALARY DETAILS\n");
            printf("\t\t\t\t\t 0] CLEAR/EXIT\n");
        }

        printf("\n");
        printf("\t\tENTER WHAT YOU DO = ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\n");
            printf("\t\tENTER NUMBER OF EMPLOYEES = ");
            scanf("%d",&n);
            printf("\n");
            printf("\t\t^^^^^^^^^^::ADD DETAILS::^^^^^^^^^^\n");
            add();
            break;

            case 2:
            printf("\n");
            printf("\t\t^^^^^^^^^^::SEARCH DETAILS::^^^^^^^^^^\n");
            search();
            break;

            case 3:
            printf("\n");
            printf("\t\t^^^^^^^^^^::SHOW DETAILS::^^^^^^^^^^\n");
            show();
            break;

            case 4:
            printf("\n");
            printf("\t\t^^^^^^^^^^::UPDATE DETAILS::^^^^^^^^^^\n");
            update();
            break;

            case 5:
            printf("\n");
            printf("\t\t^^^^^^^^^^::TAX ON SALARY DETAILS::^^^^^^^^^^\n");
            tax_Sal();
            break;


            case 0:
            printf("\t\tCLEAR/EXIT\n");
            i=0;
            break;

            default:
            printf("\t\tINVALID CHOICE,TRY AGAIN..!\n");
        }
    }
    getch();
    return 0;
}
