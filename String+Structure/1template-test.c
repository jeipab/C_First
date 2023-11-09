#include <stdio.h>

struct record
{
    int id, units;
    char firstName[30], lastName[30];
    float average;
};
/*
int main ()
{
    int i = 0, num;
    
    printf("Enter number of students: ");
    scanf("%d", &num);

    struct record student[num];

    for (i = 0; i < num; i++)
    {
        printf("\nEnter your first name: ");
        scanf("%s", student[i].firstName);

        printf("Enter your last name: ");
        scanf("%s", student[i].lastName);

        printf("Enter your ID: ");
        scanf("%d", &student[i].id);

        printf("Enter number of completed units: ");
        scanf("%d", &student[i].units);

        printf("Enter accumulated grade point average: ");
        scanf("%f", &student[i].average);
    }
    
    printf("\n==============================\n");
    
    for (i = 0; i < num; i++)
    {
        printf("\nSTUDENT %d:", i + 1);
        printf("\nYour full name is %s %s.\n", student[i].firstName, student[i].lastName);
        printf("Your ID number is %d.\n", student[i].id);
        printf("You completed %d units.\n", student[i].units);
        printf("Your average is %.2f.\n", student[i].average);
    }
    
    return 0;
}
*/