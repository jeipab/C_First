#include <stdio.h>
#include <math.h>

void instruct();
double calculateBMI(double, double);
void interpretBMI(double);

int main() {
    double height, weight, bmi;  // Declare variables
    
    instruct();             // Call instruct function

    printf("Enter height in meters: ");     // User input
    scanf("%lf", &height);
    printf("Enter weight in kilograms: ");
    scanf("%lf", &weight);

    bmi = calculateBMI(height, weight);          // Call convertToFahrenheit function

    printf("Your BMI is: %.2lf\n", bmi);   // Print result

    interpretBMI(bmi);

    return 0;
}

void instruct(){            // Orient user
    printf("Enter your height and weight to calculate your BMI.\n");
    return;
}

double calculateBMI(double h, double w){      // Convert temperature in Celcius to Fahrenheir
    double result;    // Declare variable for storing result

    result = w/pow(h, 2);   // Execute formula to calculate BMI

    return result;
}

void interpretBMI(double x){    // Interpret the value of BMI
    if (x < 18.5){
        printf("Underweight");
    }
    else if (x >= 18.5 && x < 25){
        printf("Normal");
    }
    else if (x >= 25 && x < 30){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }
}