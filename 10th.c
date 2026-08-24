#include <stdio.h>
#include <stdlib.h> // Required for qsort()
#include <string.h> // Required for strcmp() and strcspn()

// This helper function tells qsort how to compare two string names
int compareNames(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    // 2D Array: up to 10 names, each name can be up to 50 characters long
    char names[10][50]; 
    int n;

    // 1. Ask the user how many names they want to enter
    printf("Enter number of students (maximum 10): ");
    scanf("%d", &n);
    
    // Clear the leftover 'Enter' key from the keyboard memory buffer
    getchar(); 

    if (n > 10) {
        printf("Limiting the count to the maximum allowed: 10\n");
        n = 10;
    }

    // 2. Accept names from the user
    printf("Enter names of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        
        // Remove the annoying newline character (\n) that fgets captures
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // 3. Sort the names alphabetically using the standard library function
    // Parameters: array, number of items, size of 1 item, comparison function
    qsort(names, n, sizeof(names[0]), compareNames);

    // 4. Display the sorted names
    printf("\nStudent Names in Alphabetical Order:\n");
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
