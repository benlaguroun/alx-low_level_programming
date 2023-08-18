#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates a key based on a username for crackme5.
 * @argc: Number of arguments passed
 * @argv: Arguments passed to main
 *
 * Return: 0 on success, 1 on error
 **/
char base64_characters[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

char get_char_from_base64(int value) 
{
    return base64_characters[value & 63];
}

char calculate_key_value(char *str) 
{
    char result = 0;
    size_t len = strlen(str);
    for (size_t i = 0; i < len; i++) 
    {
        result += str[i];
    }
    return (result);
}

char generate_key_component(char *str, int xor_value) 
{
    return (get_char_from_base64((calculate_key_value(str) ^ xor_value) & 63));
}

char generate_random_base64() 
{
    return (get_char_from_base64(rand() & 63));
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        printf("Correct usage: ./keygen5 username\n");
        return (1);
    }

    char key[7] = "      ";
    char *username = argv[1];

    key[0] = generate_key_component(username, 59);
    key[1] = generate_key_component(username, 79);
    key[2] = generate_key_component(username, 85);
    key[3] = generate_random_base64();
    key[4] = generate_key_component(username, 239);
    key[5] = generate_key_component(username, 229);

    printf("%s\n", key);
    return (0);
}
