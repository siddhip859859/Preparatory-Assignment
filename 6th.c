#include <stdio.h>
int main()
{
    int mat1[2][2],mat2[2][2],res[2][2];

    printf("Enter 4 elements of matrix 1 :\n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter 4 elements of matrix 2 :\n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            res[i][j]=0;

            for(int k=0;k<2;k++)
            {
                res[i][j] +=mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nResulting Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", res[i][j]);   
        }
        printf("\n");
    }
    return 0;

}