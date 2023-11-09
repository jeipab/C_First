/* added comments, fixed case 2, added checkInput function, used a do-while loop instead, added prompts if inventory has proper size, and if it is full or empty*/

#include <stdio.h>

#define COLS 30                         // Macro value for column size

int menu();                             // Function prototype
void checkInput(int, char [][COLS]);

int main()
{
    int numProduct, choice, counterProduct = 0, i, j, checker = 0;          // Declare variables
    char updateProduct[COLS];                                               // Array for case 2 (updating)

    do                                                                      // Input for maximum number of products
    {
        printf("Enter the maximum number of products in the inventory: ");
        scanf("%d", &numProduct); 
        if (numProduct < 1)
        {
            printf("Inventory size should be greater than 0.\n");
        }
    } while (numProduct < 1);                                               // Check inventory size
    
    char products[numProduct][COLS];            // Array for storing product names
    int quantities[numProduct];                 // Array for storing product quantities

    do
    {
        choice = menu();                        // Call menu function
        switch(choice)
        {
            case 1:                                     // Add to inventory
                if (counterProduct >= numProduct)       // Check if inventory is full
                {
                    printf("\nInventory is full.\n");
                    break;
                }
            
                for (i = counterProduct; i < counterProduct + 1; i++)   // Input new product
                {
                    printf("\nEnter the name of the product: ");
                    scanf("%s", products[counterProduct]);
                    
                    checkInput(counterProduct, products);               // Call checkInput function
                }

                printf("Enter the quantity: ");                         // Input quantity of new product
                scanf("%d", &quantities[counterProduct]);

                counterProduct++;       // Increase counter
                break;

            case 2:                                     // Update product quantity
                if (counterProduct == 0)                // Check if inventory is empty
                {
                    printf("Inventory is empty.\n");
                    break;
                }
                
                printf("Enter the name of the product to update: ");    // Input name of product to update
                scanf("%s", updateProduct);

                for (i = 0; i < counterProduct; i++)                    // Check if product exists in the inventory
                {
                    int match = 1;
                
                    j = 0;
                    while (products[i][j] != '\0' || updateProduct[j] != '\0')
                    {
                        if (products[i][j] != updateProduct[j])
                        {
                            match = 0;
                            printf("Product does not exist in the inventory.\n");
                            break;
                        }
                        j++;
                    }

                    if (match == 1)                                     // Change quantity of existing product
                    {
                        printf("Enter the new quantity: ");
                        scanf("%d", &quantities[i]);
                    }
                }
                break;

            case 3:                                     // Display inventory
                printf("\nCurrent Inventory:\n");
                for (i = 0; i < counterProduct; i++)
                {
                    printf("Product: ");
                    printf("%s", products[i]);
                    printf(" Quantity: %d\n", quantities[i]);
                }
                break;

            case 4:                                     // Exit program
                checker = 1;
                break;
        }
        
    } while (checker != 1);

    return 0;
}

int menu()                                          // Display options and choose
{
    int x;

    printf("\nMenu: \n");
    printf("\t1. Add a new product\n");
    printf("\t2. Update product quantity\n");
    printf("\t3. Display inventory\n");
    printf("\t4. Exit\n");

    do
    {
        printf("\nEnter your choice: ");            // Input choice
        scanf("%d", &x);
        
        if(x < 1 || x > 5)                          
        {
            printf("Invalid input.");
        }
    } while (x < 1 || x > 5);                       // Check if input is valid

    return x;
}

void checkInput(int cP, char prod[][COLS])          // Check if product exists in the inventory
{
    int i, j;
    if (cP > 0)
    {
        for (i = 0; i < cP; i++)
        {
            for (j = 0; j < COLS; j++)
            {
                if (prod[i][j] != prod[cP][j])      // Base case
                {
                    break;
                }
                else if (prod[i][j] != '\0' || prod[cP][j] != '\0')
                {
                    printf("Product alreadt exists.\n");
                    printf("\nEnter the name of the product: ");
                    scanf("%s", prod[cP]);
                
                    return checkInput(cP, prod);    // Recursive case
                }
            }
        }
    }  
}