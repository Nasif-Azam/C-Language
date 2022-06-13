#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define password 555

// node created
struct node
{
    char name[20];
    int price;
    struct node *link;
} *list = NULL;

// insertend function for linked list
void insertEnd(int x, char y[20], struct node *z)
{
    struct node *n, *p;
    n = (struct node *)malloc(sizeof(struct node));
    strcpy(n->name, y);
    n->price = x;
    n->link = NULL;
    if (z == NULL)
    {
        if (z == list)
        {
            list = n;
        }
    }
    else
    {
        p = z;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = n;
    }
}

// delete function for linked list
void deleteSpecific(char key[20], struct node *x)
{
    struct node *p, *q;
    p = list;
    q = list;
    while (p != NULL)
    {
        if ((strcmp(p->name, key)) == 0)
        {
            if (p == x)
            {
                list = p->link;
            }
            q->link = p->link;
        }
        q = p;
        p = p->link;
    }
}

// sample list generated
void insert_list()
{
    char name[20];
    strcpy(name, "Chips  ");
    insertEnd(20, name, list);
    strcpy(name, "Pepsi  ");
    insertEnd(45, name, list);
    strcpy(name, "Soap   ");
    insertEnd(30, name, list);
    strcpy(name, "Salt   ");
    insertEnd(50, name, list);
    strcpy(name, "Cheese ");
    insertEnd(100, name, list);
    strcpy(name, "Sugar  ");
    insertEnd(500, name, list);
    strcpy(name, "Watch  ");
    insertEnd(1000, name, list);
    strcpy(name, "Cake   ");
    insertEnd(200, name, list);
    strcpy(name, "Oil    ");
    insertEnd(100, name, list);
    strcpy(name, "Coffee ");
    insertEnd(500, name, list);
}

// traverse linked list by id to delete items from list
void deleteid(int id, struct node *n)
{
    struct node *p = n;
    for (int i = 1; i < id; i++)
    {
        p = p->link;
        if (p == NULL)
        {
            printf("\n\n\n\n\n\n\t\t\t\tID not found");
            return;
        }
    }
    deleteSpecific(p->name, n);
    printf("\n\n\tItem deleted!\n\n");
}

void displayList(struct node *l)
{
    int id = 1, j, k;
    system("cls");
    printf("\n\n\n\t\t\t\t\t\tGUB Outlet\n\n\t");
    for (int x = 0; x < 100; x++)
    {
        printf("=");
    }
    printf("\n\n");
    if (l == NULL)
    {
        printf("EMPTY");
        printf("\n\n\n\n\n\n\n\n\n\n                                             Enter any key to return");
    }
    else
    {
        printf("\t| ID  |  Name   |  Price   |\n");
        while (l != NULL)
        {
            printf("\n\t");
            printf("|%3d  |  %s|  %6d  |\t", id, l->name, l->price);
            l = l->link;
            id++;
        }
    }
    printf("\n\n\t");
    for (int x = 0; x < 100; x++)
    {
        printf("=");
    }
}

// admin page gui
void admin_menu()
{
    int i, id, ch, pric;
    char name[20], condition;
    do
    {
        system("cls");
        printf("\n\n\n\t");
        for (i = 0; i < 100; i++)
        {
            printf("=");
        }
        printf("\n\n\n\n\t1--->View Products\n\n\t2--->Add Product\n\n\t3--->Remove Product\n\n\t4--->Logout");
        printf("\n\n\n\n\t");
        for (i = 0; i < 100; i++)
        {
            printf("=");
        }
        printf("\n\tEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            displayList(list);
            getch();
            break;
        case 2:
            do
            {
                system("cls");
                printf("\n\n\n\n\n\t\t\t\tName:");
                scanf("%s", name);
                printf("\n\n\t\t\t\tPrice:");
                scanf("%d", &pric);
                insertEnd(pric, name, list);
                printf("\n\n\n\t\t\t\tSuccesfully inserted");
                printf("\n\n\t\t\t\tDo you want to Add More?[y/n]:");
                condition = getch();
            } while (condition != 'n');
            break;
        case 3:
            system("cls");
            displayList(list);
            printf("\n\n\tEnter  Item ID:");
            scanf("%d", &id);
            deleteid(id, list);
            getch();
            break;
        }
    } while (ch < 4);
}

// code for admin login gui
void login()
{
    int pass;
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n                                                     PASSWORD:");
    scanf("%d", &pass);
    if (pass == password)
    {
        admin_menu();
    }
    else
    {
        printf("\n\n\n\n\n\n\n                                          INVALID PASSWORD, PLEASE TRY AGAIN");
        getch();
    }
}

// customer login gui
void cust_login()
{
    printf("\n\t Comming Soon...\n");
    getch();
}

// main homepage gui
void main_menu()
{
    int i, ch;
    do
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t\tGUB Outlet\n\n\t");
        for (i = 0; i < 100; i++)
        {
            printf("=");
        }
        printf("\n\n\n\n         1--->Admin login   \n\n         2--->Customer \n\n         3--->Exit");
        printf("\n\n\n\n         ");
        for (i = 0; i < 100; i++)
        {
            printf("=");
        }
        printf("\n         Enter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            login();
            break;
        case 2:
            cust_login();
            break;
        case 3:
            exit(0);
            break;
        }
    } while (ch < 3);
}
int main()
{
    system("color 0a");
    insert_list();
    main_menu();
    return 0;
}