#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Arrays of strings
    string name[] = {"Carter", "David", "John"};
    string number[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // Search for name
    string s = get_string("search? : ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name[i], s) == 0)
        {
            printf("found: %s\n", number[i]);
            return 0; // Exit after finding the match
        }
    }

    printf("not found\n"); // Print if no match is found
    return 1;
}
