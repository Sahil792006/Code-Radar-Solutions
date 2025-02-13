#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;


    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("%c", ch);
    }

    else if (isalpha(ch)) {
        char lower_ch = tolower(ch);

        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("%c", ch);
        } else {
            printf("%c", ch);
        }
    }
    else {
        printf("%c", ch);
    }

    return 0;
}
