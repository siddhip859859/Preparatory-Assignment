#include <stdio.h>
#include <string.h>

int main() {
    // 1. Declare an array with some duplicate strings
    char *arr[] = {"SUNBEAM", "PUNE", "SUNBEAM", "DAC", "PUNE", "TEST", "SUNBEAM"};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Array to keep track of duplicates we already printed
    int alreadyPrinted[7] = {0}; // Initialize all elements to 0 (false)

    printf("Duplicate strings are:\n");

    // 2. Outer loop to select a string
    for (int i = 0; i < n; i++) {
        // If this string was already identified as a duplicate and printed, skip it
        if (alreadyPrinted[i] == 1) {
            continue;
        }

        int count = 1;

        // 3. Inner loop to compare with the remaining strings
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                count++;
                // Mark the matching item so we don't process or print it again later
                alreadyPrinted[j] = 1; 
            }
        }

        // 4. If the string appeared more than once, print it exactly once
        if (count > 1) {
            printf("- %s\n", arr[i]);
        }
    }

    return 0;
}
