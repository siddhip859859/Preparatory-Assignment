#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    int factorial=1;
    for (int i=1; i<=num; i++ )
    {
        factorial *=i;

    }
    printf("factorial of %d is %d",num,factorial);
    return 0;
}