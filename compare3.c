#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("what is x: ");
    int y = get_int("what is y: ");

    if (x > y)
    {
        printf("OMG x is more than y\n");
    }
    else if (x < y)
    {
        printf("OMG x is less than y\n");
    }
    else
    {
        printf("OMG x is equal to y\n");
    }

    return 0;
}
