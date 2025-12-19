#include <stdio.h>
#include <string.h>

void reverseString(char str[]);   

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);


}

void reverseString(char str[])
{
    int i, len = strlen(str);
    char x;

    for (i = 0; i < len / 2; i++)
    {
        x = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = x;
    }
}

