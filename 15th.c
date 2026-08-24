#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count[26] = {0}; // Array to store counts for A-Z, initialized to 0

    // Get input string from user (handles spaces using %[^\n])
    printf("Sample Input:\n");
    scanf("%[^\n]s", str);

    // Process each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to uppercase to make it case-insensitive
        char ch = toupper(str[i]);

        // Check if the character is an alphabet (A to Z)
        if (ch >= 'A' && ch <= 'Z') {
            // Find the index (0 for 'A', 1 for 'B', etc.) and increment count
            count[ch - 'A']++;
        }
    }

    // Display the counts for alphabets that appeared at least once
    printf("\nSample Output:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'A', count[i]);
        }
    }

    return 0;
}
