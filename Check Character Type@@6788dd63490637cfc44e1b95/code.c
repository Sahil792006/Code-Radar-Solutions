#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // Check if the character is an alphabet
    else if (isalpha(ch)) {
        // Convert to lowercase for easy comparison
        char lower_ch = tolower(ch);

        // Check if vowel
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    }
    // If not a digit or an alphabet, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
