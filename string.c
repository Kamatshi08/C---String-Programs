#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a string with a maximum size of 100 characters
    int count = 0; // Variable to store the character count

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input string from the user

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count the characters in the string
    while (str[count] != '\0') {
        count++;
    }

    // Print the character count
    printf("The number of characters in the string is: %d\n", count);

    return 0;
}
