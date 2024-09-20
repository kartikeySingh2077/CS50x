#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Check if the user provided exactly one command-line argument (the key)
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert the command-line argument to an integer
    int key = atoi(argv[1]);

    // Ensure the key is a positive integer
    if (key <= 0)
    {
        printf("Key must be a positive integer.\n");
        return 1;
    }

    // Get the plaintext from the user
    char plaintext[256];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Remove the newline character from the plaintext if present
    size_t len = strlen(plaintext);
    if (len > 0 && plaintext[len - 1] == '\n')
    {
        plaintext[len - 1] = '\0';
    }

    // Encrypt the plaintext
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        // Encrypt only alphabetic characters
        if (isalpha(c))
        {
            char offset = isupper(c) ? 'A' : 'a';
            printf("%c", (c - offset + key) % 26 + offset);
        }
        else
        {
            // Non-alphabetic characters remain unchanged
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}
