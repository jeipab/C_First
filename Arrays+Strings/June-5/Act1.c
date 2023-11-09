#include <stdio.h>

int main()
{
    int numMovie, numRating, i,j;
    float ave;
    
    printf("Enter the number of movies: ");
    scanf("%d", &numMovie);

    printf("Enter the number of rating per movie: ");
    scanf("%d", &numRating);

    int arrRating[numMovie][numRating];

    float arrAverage[numMovie];

    for (i = 0; i < numMovie; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        for (j = 0; j < numRating; j++)
        {
            do
            {
                printf("Enter rating %d: ", j + 1);
                scanf("%d", &arrRating[i][j]);

                if (arrRating[i][j] < 1 || arrRating[i][j] > 5)
                {
                    printf("Rating should on the scale of 1 to 5.\n");
                }
            } while (arrRating[i][j] < 1 || arrRating[i][j] > 5);
        }
    }

    printf("\nMovie ratings:\n");
    for (i = 0; i < numMovie; i++)
    {
        printf("Movie %d: ", i + 1);
        for (j = 0; j < numRating; j++)
        {
            printf("%d ", arrRating[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numMovie; i++)
    {
        for (j = 0; j < numRating; j++)
        {
            ave += arrRating[i][j];
            arrAverage[i] = ave / numRating;
        }
        ave = 0;
    }
    
    printf("\nAverage ratings: \n");
    for (i = 0; i < numMovie; i++)
    {
        printf("Movie %d: %.2f\n", i + 1, arrAverage[i]);
    }  
    return 0;
}