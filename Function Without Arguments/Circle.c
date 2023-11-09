#include <stdio.h>
#include <math.h>

#define PI 3.13159

double instruct();

int main()
{
    double radius, area, circum;    // Input and outpus

    instruct();                     // Call instruct function  
    scanf("%lf", &radius);          // Store input

    area = PI * pow(radius, 2);    // Get area of circle
    circum = 2 * PI * radius;   // Get circumference of circle

    printf("Area = %.3lf\nCircumference = %.3lf", area, circum);    //Print result 
    return 0;
}

double instruct()   // Print instructions
{
    printf("Instructions:\n");
    printf("This program computes the area\nAnd circumference of a circle.\n");
    printf("\nTo use this program, enter the radius of the circle after the prompt: Enter radius=>\n");
}