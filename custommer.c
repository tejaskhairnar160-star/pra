#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 3
struct custommer
{
    int CID;
    char cname[50];
    char branch[50];
    int flag;
} c[SIZE];


// create the data

void create()
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the customer id  :");
        scanf("%d", &c[i].CID);

        fflush(stdin);
        printf("Enter the customer name : ");
        gets(c[i].cname);

        fflush(stdin);
        printf("Enter the branch name : ");
        gets(c[i].branch);

        c[i].flag = 1;
    }
}

// display the data

void display()
{
    int i;

    printf("\nCID\tcname\tbranch\n");
    printf("----------------------------------------------------\n");
    for (i = 0; i < SIZE; i++)
    {
        if(c[i].flag==1)
        {
            printf("%d\t%s\t%s\n", c[i].CID, c[i].cname, c[i].branch);
        }    
    }
}

void perDisplay(int num)
{
    int i;

    printf("\nCID\tcname\tbranch\n");
    printf("----------------------------------------------------\n");
    for(i=0;i<SIZE;i++)
    {
        if(num == c[i].CID)
        {
            printf("%d\t%s\t%s\n",c[i].CID,c[i].cname,c[i].branch);
        }
    }

}

// delete data

void delete(int num)
{
    int i;

    for(i=0;i<SIZE;i++)
    {
        if(num==c[i].CID)
        {
            c[i].flag=0;

            printf("deleted succesfully....!");
        }
    }
}

// update data

void update(int num)
{
    int i;

    for(i=0;i<SIZE;i++)
    {
        if(num==c[i].CID)
        {
            fflush(stdin);
            printf("Enter the customer name : ");
            gets(c[i].cname);

            fflush(stdin);
            printf("Enter the branch name : ");
            gets(c[i].branch);

            printf("\nupdated succesfully\n");
        }
    }
}

//search data

void search(int num)
{
    int i;

    printf("\nCID\tcname\tbranch\n");
    printf("----------------------------------------------------\n");
    for(i=0;i<SIZE;i++)
    {
        if(num == c[i].CID)
        {
            printf("%d id is found index %d ",c[i].CID,i);
        }
    }

}


// main function
int main()
{
    int ch, num;

    while (num!=7)
    {
        printf("\n1 for create");
        printf("\n2 for display");
        printf("\n3 for Perticular Display");
        printf("\n4 for delete");
        printf("\n5 for update");
        printf("\n6 for search");
        printf("\n7 for Exit");
        printf("\nEnter the your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter the you wont search customer id : ");
                scanf("%d",&num);
                perDisplay(num);    
                break;
            case 4:
                printf("Enter the you wont deleted customer row : ");
                scanf("%d",&num);
                delete(num);
                break; 
            case 5:
                printf("Enter the updateing id : ");
                scanf("%d",&num);    
                update(num);
                break;
            case 6:
                printf("Enter the searching id : ");
                scanf("%d",&num);     
                search(num);
                break;

            case 7: exit(0); 
                break;   
        }
    }
    return 0;
}
