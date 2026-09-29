#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int left = 0;
    int right;
    int isPalindrome = 1; // 1 means true, 0 means false

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    right = strlen(str) - 1;

    // Check characters from both ends moving inward
    while (left < right) {
        // Convert both to lowercase to ignore case differences
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = 0; // Characters mismatch
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
