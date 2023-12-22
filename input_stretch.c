#include <stdio.h>

int main()
{
    int max_length = 50;
    char name[max_length];

    printf("Please enter your name (Max 50 characters) ");
    scanf("%s", name);

    printf("%s\n", name);

    // last character of a string is \0

    // calculate the length of name

    char c;

    int char_count = 0;

    for (int count = 0; count < max_length; count++)
    {
        c = name[count]; // or you could do *(name+count)
        if (c == '\0')
        {
            break;
        }
        char_count ++;
    }

    printf("The length of your name is %d\n", char_count);

    printf("%s \n", name);


    for (int count = 0; count < char_count; count++)
    {
        *(name + count) = 'X'; // use single quotations for characters
        printf("%s \n", name);
    }

    return 0;
}