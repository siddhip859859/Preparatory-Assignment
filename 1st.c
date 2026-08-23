#include <stdio.h>
#include <stdlib.h>
int main (int argc,char *argv[])
{
    if(argc<2)
    {
        printf("Sorry! give at least 2 numbers.\n");
        return(1);
    }

    double max = atof(argv[1]);

    for(int i=2; i<argc;i++)
    {
        double current = atof(argv[i]);
        if(current>max)
        {
            max=current;
        }
    }
    printf("maximum number is:%g",max);

    return 0;
}