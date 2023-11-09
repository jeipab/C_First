/*Added comments*/

#include <stdio.h>

int main()
{
    int numMovie, numRating, i,j;           // Declare variables
    float ave;
    
    printf("Enter the number of movies: ");             // Input for number of movies
    scanf("%d", &numMovie);

    printf("Enter the number of rating per movie: ");   // Input for number of ratings per movie 
    scanf("%d", &numRating);

    int arrRating[numMovie][numRating];     // Array grouping movies with ratings

    float arrAverage[numMovie];             // Array for average ratings

    for (i = 0; i < numMovie; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        for (j = 0; j < numRating; j++)
        {
            do
            {
                printf("Enter rating %d: ", j + 1);     // Input for rating
                scanf("%d", &arrRating[i][j]);

                if (arrRating[i][j] < 1 || arrRating[i][j] > 5)
                {
                    printf("Rating should on the scale of 1 to 5.\n");
                }
            } while (arrRating[i][j] < 1 || arrRating[i][j] > 5);       // Check if rating is on the scale of 1 to 5
        }
    }

    printf("\nMovie ratings:\n");                       // Display movie ratings
    for (i = 0; i < numMovie; i++)
    {
        printf("Movie %d: ", i + 1);
        for (j = 0; j < numRating; j++)
        {
            printf("%d ", arrRating[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numMovie; i++)                      // Calculate average ratings
    {
        for (j = 0; j < numRating; j++)
        {
            ave += arrRating[i][j];
            arrAverage[i] = ave / numRating;
        }
        ave = 0;
    }
    
    printf("\nAverage ratings: \n");                    // Display average ratings
    for (i = 0; i < numMovie; i++)
    {
        printf("Movie %d: %.2f\n", i + 1, arrAverage[i]);
    }  
    return 0;
}