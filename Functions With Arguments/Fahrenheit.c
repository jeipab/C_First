#include <stdio.h>

void instruct();
float convertToFahrenheit(float);

int main() {
    float celcius, fahrenheit;  // Declare variables
    
    instruct();     // Call instruct function

    printf("Enter the the temperature in Celcius: ");    // User input
    scanf("%f", &celcius);

    fahrenheit = convertToFahrenheit(celcius);          // Call convertToFahrenheit function

    printf("%.2f degrees Celcius is equal to %.2f degrees in Fahrenheit.\n", celcius, fahrenheit);   // Print result

    return 0;
}

void instruct(){            // Orient user
    printf("Enter temperature in Celcius to convert it to Fahrenheit.\n");
    return;
}

float convertToFahrenheit(float c){      // Convert temperature in Celcius to Fahrenheir
    float converted;    // Declare variable for storing result

    converted = c * 9/5 + 32;   // Execute formula for conversion

    return converted;
}
