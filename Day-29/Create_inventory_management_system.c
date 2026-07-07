#include <stdio.h>
struct Item
{
    int id;
    char name[30];
    int quantity;
    float price;
};

int main()
{
    struct Item item[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n------ Inventory Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", item[i].id);
        printf("\nName: %s", item[i].name);
        printf("\nQuantity: %d", item[i].quantity);
        printf("\nPrice: %.2f\n", item[i].price);
    }

    return 0;
}