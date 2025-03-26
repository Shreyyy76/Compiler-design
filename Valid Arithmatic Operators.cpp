#include <stdio.h>

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int main() {
    char input;
    printf("Enter a character: ");
    scanf(" %c", &input);

    if (isOperator(input))
        printf("'%c' is a valid arithmetic operator.\n", input);
    else
        printf("'%c' is NOT a valid arithmetic operator.\n", input);

    return 0;
}#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidGrammar(char *str) {
    int len = strlen(str);
    if (!isupper(str[0])) return 0; 
    if (str[len - 1] != '.') return 0; 
    for (int i = 1; i < len - 1; i++) {
        if (!isalpha(str[i]) && str[i] != ' ') return 0; 
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    
    if (isValidGrammar(str))
        printf("Valid sentence.\n");
    else
        printf("Invalid sentence.\n");
    
    return 0;
}
