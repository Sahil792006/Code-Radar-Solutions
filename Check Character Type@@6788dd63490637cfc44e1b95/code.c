#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;


    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }

    else if (isalpha(ch)) {
        char lower_ch = tolower(ch);

        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    }
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
