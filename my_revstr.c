/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** Nothing
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int my_strlen(char const *str)
{
    int x = 0;

    while (x[str] != '\0') {
    x++;
    }
    return (x);
}

char *my_revstr(char *str)
{
    int a;
    int b = my_strlen(str) - 1;
    int count;
    char temp;

    while (count < (my_strlen(str) / 2)) {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;
        a++;
        b--;
        count++;
    }
    return (str);
}
