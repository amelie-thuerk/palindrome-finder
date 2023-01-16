#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main() {
    char palindrome[64];
    int is_palindrome = 1;

    printf("Gib ein Wort ein: \n\n");
    scanf("%s", palindrome);
    
    int palindrome_length = strlen(palindrome); 
   
    for (int i = 0; i < palindrome_length; i++) {
        palindrome[i] = tolower(palindrome[i]);
        if (palindrome[i] != tolower(palindrome[palindrome_length - i - 1])) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("Palindrom");
    } else {
        printf("Kein Palindrom");
    }

    return 0;
}