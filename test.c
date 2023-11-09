#include <stdio.h>
#include <string.h>

struct record
{
    int salary;
    char fullName[50], id[10];
};

int menu();

int main()
{
    char a;
    int size, choice, i, currentSize = 0, checker;
    float totalSalary = 0, averageSalary;
    do
    {
        printf("Enter the number of employees: ");
        scanf("%d", &size);

        if (size < 1)
        {
            printf("Number of employees should be greater than 0.\n");
        }

    } while (size < 1);

    struct record employee[size];

    do
    {
        choice = menu();                                // Call menu function
        switch(choice)
        {
            case 1:                                     // Add to inventory
                if (currentSize >= size)                // Check if inventory is full
                {
                    printf("\nSystem is full.\n");
                    break;
                }
            
                for (i = currentSize; i < currentSize + 1; i++)     // Input new product
                {
                    
                    printf("\nEnter employee ID: ");
                    gets(employee[i].id);
                    printf("Enter employee name: ");
                    gets(employee[i].fullName);
                    printf("Enter employee salary: ");
                    scanf("%d", &employee[i].salary);

                    printf("\nEmployee added successfully!\n");
                }

                currentSize++;                      // Increase counter
                break;

            case 2:                                 // Update product quantity
                if (currentSize == 0)               // Check if inventory is empty
                {
                    printf("System is empty.\n");
                    break;
                }
                
                printf("Employee details: ");    // Display employee details
                
                for (i = 0; i < currentSize; i++)
                {
                    printf("\nID: %s\n", employee[i].id);
                    printf("Name: ");
                    puts(employee[i].fullName);
                    printf("Salary: %d\n", employee[i].salary);
                }
                break;

            case 3:                                     // Calculate average salary
                if (currentSize == 0)                // Check if inventory is empty
                {
                    printf("System is empty.\n");
                    break;
                }

                for(i = 0; i < currentSize; i++)            // Get total salary
                {
                    totalSalary += employee[i].salary;
                }
                averageSalary = totalSalary/currentSize;    // Get average salary
                printf("\nAverage Salary: %.2f\n", averageSalary);
                totalSalary = 0;                            // Reset
                averageSalary = 0;
                
                break;

            case 4:                                     // Exit program
                checker = 1;

                printf("Exiting the program...\n");
                break;
        }
        
    } while (checker != 1);

}

int menu()                                          // Display options and choose
{
    int x;

    printf("\nMenu: \n");
    printf("\t1. Add an employee\n");
    printf("\t2. Display employee details\n");
    printf("\t3. Calculate average salary\n");
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