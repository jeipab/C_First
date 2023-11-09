#include <stdio.h>
#include <math.h>

#define PI 3.14159

void instruct();
double areaRectangle(float, float);
double areaCircle(float);
double areaTriangle(float, float);
double areaSquare(float);

int main() {
    int shape;      // Declare variables
    float width, height, radius, base, length;
    double area;
    char s[][10] = {"rectangle", "circle", "triangle", "square"};
    
    instruct();     // Call instruct function

    printf("Select a shape to calculate the area of:\n1. Rectangle\n2. Circle\n3. Triangle\n4. Square\nEnter your choice: ");    // User input
    scanf("%d", &shape);

    switch(shape)   // Determine the shape
    {
        case 1:
            printf("Enter the width of the rectangle: ");   // Input for measurements
            scanf("%f", &width);
            printf("Enter the height of the rectangle: ");
            scanf("%f", &height);
            area = areaRectangle(width, height);        // Function call
            break;
        case 2:
            printf("Enter the radius of the circle: "); // Input for measurements
            scanf("%f", &radius);
            area = areaCircle(radius);                  // Function call
            break;
        case 3:
            printf("Enter the base of the triangle: "); // Input for measurements
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = areaTriangle(base, height);          // Function call
            break;
        case 4:
            printf("Enter the length of the square: "); // Input for measurements
            scanf("%f", &length);
            area = areaSquare(length);                  // Function call
            break;
        default:
            printf("Invalid input.");    // Wrong input
            return 1;
    }

    printf("The area of the %s is %lf", s[shape - 1], area);

    return 0;
}

void instruct(){    // Orient user
    printf("Choose the corresponding number for the shape then enter its size to calculate the area.\n");
    return;
}

double areaRectangle(float w, float h){ // Get area of rectangle
    double area;    // Declare variable for storing result
    area = w * h;
    return area;
}

double areaCircle(float r){             // Get area of circle
    double area;    // Declare variable for storing result
    area = PI * pow(r, 2); 
    return area;
}

double areaTriangle(float b, float h){  // Get area of triangle
    double area;    // Declare variable for storing result
    area = .5 * b * h; 
    return area;
}

double areaSquare(float l){             // Get area of square
    double area;    // Declare variable for storing result
    area = pow(l, 2); 
    return area;
}