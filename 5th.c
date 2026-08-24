#include <stdio.h>
int main()
{
    char str[100];
    int upper =0;
    int lower =0;
    int digit =0;
    int special =0;

    printf("Enter string :");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i] == '\n') {
            continue;
        } 

        if(str[i]>='A' && str[i]<='Z')
        {
            upper =upper+1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lower =lower +1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit =digit+1;
        }
        else
        {
            special =special+1;
        }

    }    
        
    printf("uppercase letters %d\n",upper);
    printf("lowercase letters %d\n",lower);
    printf("digit numbers %d\n",digit);
    printf("special characters %d\n",special);
    return 0;

}