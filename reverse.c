#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char reverse[100];
    scanf("%[^\n]s", a);

    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        reverse[i] = a[l - 1 - i];
        if (reverse[l - 1] == '\n')
        {
            reverse[l - 1] = '\0';
        }
    }
    printf("%s", reverse);
}
