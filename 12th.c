#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    // Get input string from user
    printf("Input: ");
    scanf("%s", str);

    // Calculate length of the string manually or using strlen
    length = strlen(str);

    // Reverse the string in-place using a two-pointer approach
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }

    // Print the reversed string
    printf("Output: %s\n", str);

    return 0;
}
