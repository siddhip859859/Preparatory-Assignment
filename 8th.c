#include <stdio.h>


struct Student
{
    char name[50];       
    char rollNumber[20]; 
    double totalMarks;   
};

int main() {
   
    struct Student s;

    // 2. Accept details from the user
    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Roll Number (e.g., 24CS01): ");
    fgets(s.rollNumber, sizeof(s.rollNumber), stdin);

    printf("Enter Total Marks: ");
    scanf("%lf", &s.totalMarks);

    // 3. Display the entered data cleanly
    printf("\n--- Student Details ---\n");
    printf("Name       : %s", s.name);
    printf("Roll Number: %s", s.rollNumber);
    printf("Total Marks: %.2f\n", s.totalMarks);

    return 0;
}
