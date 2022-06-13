#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// FUNCTION TO GENERATE BILLS

struct items
{
    char item[20];
    float price;
    int qty;
};

struct oders
{
    char customer[50];
    char date[30];
    int numofItem;
    struct items itm[50];
};

void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t   My Restaurent ");
    printf("\n\t=====================");
    printf("\n Date:%s", date);
    printf("\n Invoice To: %s", name);
    printf("\n");
    printf("========================================\n ");
    printf("Items \t\t");
    printf("Quantity \t ");
    printf("Total \t");
    printf("\n========================================");
    printf("\n");
    printf("\n");
}

void generateBillBody(char item[30], int qty, float price)
{
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}

void generateBillFooter(float total)
{
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, grandTotal = netTotal + 2 * cgst;
    printf("---------------------------------------\n");
    printf(" Sub Total\t\t\t%.2f", total);
    printf("\n Discount @10%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t\t\t-------");
    printf("\n Net Total \t\t\t%.2f", netTotal);
    printf("\n CGST @9%s\t\t\t%.2f", "%", cgst);
    printf("\n SGST @9%s\t\t\t%.2f", "%", cgst);
    printf("\n--------------------------------------");
    printf("\n Grand Total\t\t\t%.2f", grandTotal);
    printf("\n--------------------------------------\n");
}

int main()
{

    int opt, n;
    struct oders ord;
    struct oders oder;
    char saveBill = 'y';
    char name[50];
    char countFLag = 'y';
    FILE *fp;
    // Dashboard
    while (countFLag == 'y')
    {
        system("clear");
        float total = 0;
        int invoiceFound = 0;
        printf("\t ============My Restaurent======= ");
        printf("\n\n Please select your prefered Oparation:");
        printf("\n 1.Generate Invoice");
        printf("\n 2.Show all Invoice");
        printf("\n 3.Search Invoice");
        printf("\n 4.Exit");

        printf("\n\n Your choice:\t");
        scanf("%d", &opt);

        fgetc(stdin);
        switch (opt)
        {
        case 1:
            printf(" Please enter the customer name:\t");
            fgets(ord.customer, 50, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf(" Please enter the number of items:\t");
            scanf("%d", &n);
            ord.numofItem = n;

            for (int i = 0; i < n; i++)
            {
                fgetc(stdin);
                printf("\n\n");
                printf(" Please enter the item %d: \t", i + 1);
                fgets(ord.itm[i].item, 20, stdin);
                ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
                printf(" Please enter the quantity:\t");
                scanf("%d", &ord.itm[i].qty);
                printf(" please enter the unit price :\t");
                scanf("%f", &ord.itm[i].price);
                total += ord.itm[i].qty * ord.itm[i].price;
            }
            generateBillHeader(ord.customer, ord.date);
            for (int i = 0; i < ord.numofItem; i++)
            {
                generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            generateBillFooter(total);

            printf("Do you want to save the Invoice [y/n]:\t");
            scanf("%s", &saveBill);

            if (saveBill == 'y')
            {
                fp = fopen("RestaurentBill.dat", "a+");
                fwrite(&ord, sizeof(struct oders), 1, fp);
                if (fwrite != 0)
                    printf("\n Succesfully Saved\n");
                else
                    printf("\n Error Saving\n");
                fclose(fp);
            }
            break;

        case 2:
            system("clear");
            fp = fopen("RestaurentBill.dat", "r");
            printf("\n ***** Your Previous Invoices *****\n");
            while (fread(&oder, sizeof(struct oders), 1, fp))
            {
                float tot = 0;
                generateBillHeader(oder.customer, oder.date);
                for (int i = 0; i < oder.numofItem; i++)
                {
                    generateBillBody(oder.itm[i].item, oder.itm[i].qty, oder.itm[i].price);
                    tot += oder.itm[i].qty * oder.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("\nEnter the name of the customer:\t");
            // fgetc(stdin);
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = 0;
            system("clear");
            fp = fopen("RestaurentBill.dat", "r");
            printf("\n *****Invoice of %s*****\n", name);
            while (fread(&oder, sizeof(struct oders), 1, fp))
            {
                float tot = 0;
                if (!strcmp(oder.customer, name))
                {
                    generateBillHeader(oder.customer, oder.date);
                    for (int i = 0; i < oder.numofItem; i++)
                    {
                        generateBillBody(oder.itm[i].item, oder.itm[i].qty, oder.itm[i].price);
                        tot += oder.itm[i].qty * oder.itm[i].price;
                    }

                    generateBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            if (!invoiceFound)
            {
                printf("Sorry the invoice of %s doesn't exists\n", name);
            }
            fclose(fp);
            break;

        case 4:
            printf("\n\t\t****** Bye Bye ******* ");
            exit(0);
            break;

        default:
            printf(" Sorry Invalid Input\n");
            break;
        }
        printf(" Do you want to perform another opoeration? [y/n]:\t");
        scanf("%s", &countFLag);
    }
    printf("\n\t\t****** Bye Bye ******* \n");
    printf("\n");
    return 0;
}
