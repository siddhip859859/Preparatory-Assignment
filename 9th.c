#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d" , &num);
    
    printf("Given Number: %d\n", num);

    printf("Binary Equivalent: ");

    if(num == 0)
    {
        printf("0");
    }
    else
    {
        int binaryarray[32];
        int i=0;
        int temp=num;

        while ( temp>0)
        {
            binaryarray[i] =temp % 2;
            temp = temp/2;
            i++;
        }
        for (int j=i-1;j>0;j--)
        {
            printf("%d" , binaryarray[j]);
        }
    }
    printf("\n");

    printf("Octal equivalent: %o\n", num);       
    printf("Hexadecimal equivalent: %X\n", num);

    return 0;
}