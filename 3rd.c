#include <stdio.h>
int main()
{
    int n;
    double t1=0;
    double t2=1;
    double nextTerm;
    printf("enter the number of terms ");
    scanf("%d", &n);

    printf("Fibonacci series ");

    for (int i =1;i<=n ;i++)
    {
        printf("%.0f", t1);

        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        printf("\n");
    }
   
    return 0;

}