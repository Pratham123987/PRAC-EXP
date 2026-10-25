#include <stdio.h>
#include <string.h>
#define d 256
#define q 101
void rabinKarp(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;
    int found = 0;
    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;
    for (i = 0; i < m; i++)
    {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }
        for (i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == m)
            {
                printf("Pattern found at index %d\n", i);
                found = 1;
            }
        }
        if (i < n - m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if (t < 0)
                t = t + q;
        }
    }
    if (!found)
        printf("Pattern not found in the text.\n");
}
int main()
{
    char text[500];
    char pattern[100];
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    if (strlen(pattern) == 0 || strlen(pattern) > strlen(text))
    {
        printf("Invalid pattern.\n");
        return 0;
    }
    rabinKarp(text, pattern);
    return 0;
}
