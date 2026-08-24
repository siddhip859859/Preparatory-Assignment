#include <stdio.h>
int main()
{
    int start,end;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the first number: ");
    scanf("%d", &end);
    
    
    if(start>end)
    {
        int temp=start;
        start =end;
        end=temp;
    }
    for(int num=start;num<=end;num++)
    {
        printf("\nMultiplication Table of %d:\n", num);
        printf("-----------------------------\n");

        for(int i=1;i<=10;i++)
        {
            printf(" %d * %d = %d\n" ,num,i,num*i);
        }
    }
    return 0;
    

}