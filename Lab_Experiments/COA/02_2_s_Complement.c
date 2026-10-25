#include <stdio.h>
#include <string.h>
int main()
{
    char binary[100];
    int i, len;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    len = strlen(binary);
    for(i = len - 1; i >= 0; i--)
    {
        if(binary[i] == '1')
             break;
    }
    if(i == -1)
    {
        printf("2's Complement: 1%s\n", binary);
    }
    else
    {
        for(i = i - 1; i >= 0; i--)
        {
             if(binary[i] == '1')
                      binary[i] = '0';
                 else
                      binary[i] = '1';
            }
            printf("2's Complement: %s\n", binary);
     }
     return 0;
}
