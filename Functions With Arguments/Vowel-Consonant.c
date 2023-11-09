#include <stdio.h>
#include <ctype.h>

void instruct();
int check(char);

int main() {
    int letter, type;     // Declare variable
    char arr[][10] = {"vowel", "consonant"};
    
    instruct();     // Call instruct function

    printf("Enter a character: ");  // User input
    scanf("%c", &letter);

    if(isalpha(letter) == 0)        // Check input
    {
        printf("Invalid input.");
        return 1;
    }

    type = check(letter);

    printf("The entered character is a %s.\n", arr[type]);   // Print result

    return 0;
}

void instruct(){            // Orient user
    printf("Enter a letter to check if it is a vowel or consonant.\n");
    return;
}

int check(char l){      // Determine if vowel or consonant
    int x;
    l = tolower(l);     // Change character to lowercase

    if(l == 'a' ||l == 'e' ||l == 'i' ||l == 'o'||l == 'u' ){
        x = 0;
    }
    else{
        x = 1;
    }
    return x;
}