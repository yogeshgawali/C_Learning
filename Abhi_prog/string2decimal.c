/*
input
chat temp ="12345"

output
int value = 12345
*/

#include<stdio.h>


int main()
{
    char str[]="826763";
    int value=0, i, len, n;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        n = str[i]-48;
        value = (value*10) + n;
    }
    printf("int value: %d\n", value);

    return 0;
}
