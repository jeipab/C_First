#include <stdio.h>

int menu();

int main()
{
    int numProduct, choice, counterProduct = 0, i, j, checker = 0;

    printf("Enter the maximum number of products in the inventory: ");
    scanf("%d", &numProduct); 

    char products[numProduct][30];
    int quantities[numProduct];

    while (checker == 0)
    {
        choice = menu();
        switch(choice)
        {          
            case 1:
                if (counterProduct >= numProduct)
                {
                    printf("Inventory full.\n");
                    break;
                }
            
                for (i = counterProduct; i < counterProduct + 1; i++)
                {
                    printf("\nEnter the name of the product: ");
                    scanf("%s", products[counterProduct]);
                }
                printf("Enter the quantity: ");
                scanf("%d", &quantities[counterProduct]);

                counterProduct++;
                break;
            
        case 2:
            char updateProduct[1][30];
            printf("Enter the name of the product to update: ");
            scanf("%s",updateProduct[1]);

            for (i = 0; i < numProduct; i++)
            {
                for (j = 0; j < 30; j++)
                {
                    if(products[i][j] == updateProduct[i][j])
                    {
                        printf("Enter the new quantity: ");
                        scanf("%d", quantities[i]);
                    }
                }
            }
            break;

        case 3:
            printf("Current Inventory:\n");
                for (i = 0; i < counterProduct; i++)
                {
                    printf("Product: ");
                    printf("%s", products[i]);
                    printf(" Quantity: %d\n", quantities[i]);
                }
                break;

        case 4:
            checker = 1;
            break;
        }
    }
    return 0;
}

int menu()
{
    int x;

    printf("Menu: \n");
    printf("\t1. Add a new product\n");
    printf("\t2. Update product quantity\n");
    printf("\t3. Display inventory\n");
    printf("\t4. Exit\n");

    printf("Enter your choice:");
    scanf("%d", &x);

    return x;
}