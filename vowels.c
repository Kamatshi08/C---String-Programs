#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a string with a maximum size of 100 characters
    int count = 0; // Variable to store the vowel count
    int i;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input string from the user

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count the vowels in the string
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    // Print the vowel count
    printf("The number of vowels in the string is: %d\n", count);

    return 0;
}
