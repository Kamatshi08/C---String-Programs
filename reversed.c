#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a string with a maximum size of 100 characters
    char reversedStr[100]; // Array to hold the reversed string
    int length, i, j;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input string from the user

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Get the length of the string
    length = strlen(str);

    // Reverse the string
    for(i = 0, j = length - 1; j >= 0; i++, j--) {
        reversedStr[i] = str[j];
    }
    reversedStr[i] = '\0'; // Add the null terminator at the end

    // Print the reversed string
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}
