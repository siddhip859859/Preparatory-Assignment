#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// 1. Initialize employee details
void initializeEmployee(struct Employee *emp, const char *fName, const char *lName, double salary) {
    strcpy(emp->firstName, fName);
    strcpy(emp->lastName, lName);
    // Ensure salary is not negative
    if (salary < 0.0) {
        emp->monthlySalary = 0.0;
    } else {
        emp->monthlySalary = salary;
    }
}

// 2. Display employee details
void displayEmployee(struct Employee emp) {
    printf("Employee: %s %s\n", emp.firstName, emp.lastName);
    printf("Monthly Salary: $%.2f\n", emp.monthlySalary);
}

// 3. Modify the employee's salary
void modifySalary(struct Employee *emp, double newSalary) {
    if (newSalary < 0.0) {
        emp->monthlySalary = 0.0;
    } else {
        emp->monthlySalary = newSalary;
    }
}

// 4. Calculate and display yearly salary
double getYearlySalary(struct Employee emp) {
    return emp.monthlySalary * 12;
}

int main() {
    // Create two Employee objects
    struct Employee emp1;
    struct Employee emp2;

    // Initialize employee details
    initializeEmployee(&emp1, "John", "Doe", 5000.0);
    initializeEmployee(&emp2, "Jane", "Smith", 6000.0);

    // Display initial details
    printf("--- Initial Employee Details ---\n");
    displayEmployee(emp1);
    displayEmployee(emp2);
    printf("\n");

    // Display the initial yearly salary of both employees
    printf("--- Initial Yearly Salaries ---\n");
    printf("%s %s's Yearly Salary: $%.2f\n", emp1.firstName, emp1.lastName, getYearlySalary(emp1));
    printf("%s %s's Yearly Salary: $%.2f\n", emp2.firstName, emp2.lastName, getYearlySalary(emp2));
    printf("\n");

    // Give each employee a 10% salary increase
    // New salary = current salary * 1.10
    modifySalary(&emp1, emp1.monthlySalary * 1.10);
    modifySalary(&emp2, emp2.monthlySalary * 1.10);

    // Display their yearly salary again after the 10% raise
    printf("--- Yearly Salaries After 10%% Increment ---\n");
    printf("%s %s's New Yearly Salary: $%.2f\n", emp1.firstName, emp1.lastName, getYearlySalary(emp1));
    printf("%s %s's New Yearly Salary: $%.2f\n", emp2.firstName, emp2.lastName, getYearlySalary(emp2));

    return 0;
}
