#include <stdio.h>

int main()
{
    int numStudent, numSubject, i,j;
    float ave;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudent);

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubject);

    int arrGrades[numStudent][numSubject];

    float arrAverage[numStudent];

    for (i = 0; i < numStudent; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < numSubject; j++)
        {
            printf("Enter grade for subject %d: ", j + 1);
            scanf("%d", &arrGrades[i][j]);
        }
    }

    printf("\nStudent grades:\n");
    for (i = 0; i < numStudent; i++)
    {
        printf("Student %d: ", i + 1);
        for (j = 0; j < numSubject; j++)
        {
            printf("%d ", arrGrades[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numStudent; i++)
    {
        for (j = 0; j < numSubject; j++)
        {
            ave += arrGrades[i][j];
            arrAverage[i] = ave / numSubject;
        }
        ave = 0;
    }
    
    printf("\nAverage grades: \n");
    for (i = 0; i < numStudent; i++)
    {
        printf("Student %d: %.2f\n", i + 1, arrAverage[i]);
    }  
    return 0;
}