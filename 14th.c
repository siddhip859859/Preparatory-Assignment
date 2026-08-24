#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1; // Flag initialized to 1 (true)

    // Get input string from user
    printf("Input: ");
    scanf("%s", str);

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Check characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0; // Not a palindrome
            break;            // Stop checking immediately
        }
        start++;
        end--;
    }

    // Display the result
    if (isPalindrome) {
        printf("Output: Palindrome\n");
    } else {
        printf("Output: Not a Palindrome\n");
    }

    return 0;
}
