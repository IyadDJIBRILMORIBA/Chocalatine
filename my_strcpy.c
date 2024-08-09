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
