/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** RAS
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include <unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    int x = 0;

    while (src[x]) {
        dest[x] = src[x];
        x++;
    }
    dest[x] = '\0';
    return (dest);
}

int main()
{
    char my_string[] = "Hello, World!";
    char copied_string[50];

    printf("Original string: %s\n", my_string);

    printf("Copied string: %s\n", my_strcpy(copied_string, my_string));
    return 0;
}