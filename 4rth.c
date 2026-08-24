#include <stdio.h>
int main()
{
    double marks, totalMarks=0;

    for(int i=1;i<=5;i++)
    {
        printf("Enter the marks of subject %d (out of 20)" ,i);
        scanf("%lf",&marks);
        totalMarks += marks;

    }

    char grade;
    int isExcellent=0;

    if(totalMarks>=90 && totalMarks<=100)
    {
        isExcellent =1;
    }else if (totalMarks>=80 && totalMarks<90)
    {
       grade = 'A';
    }else if (totalMarks>=70 && totalMarks <80)
    {
        grade = 'B';
    }else if(totalMarks >=60 && totalMarks<70)
    {
        grade = 'C';
    }else
    {
        grade ='F';
    }
    
    printf("\n---Result---\n");
    printf("Total Marks : %.2f/100\n", totalMarks);

    if (isExcellent)
    {
        printf("Grade : Ex\n");
    }else
    {
        printf("Grade : %c \n" , grade);
    }
    return 0;
    
}