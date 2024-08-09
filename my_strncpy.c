/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** RAS
*/
#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdio.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int x;

    for (x = 0; x < n; x++){
        dest[x] = src[x];
    }
    if (n > src[x]){
        dest[x] = '\0';
    }
}
