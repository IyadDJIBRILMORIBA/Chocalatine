/*
** EPITECH PROJECT, 2024
** test_my_revstr
** File description:
** Nothing
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);
Test(my_revstr, reverses_a_string)
{
    char str[]="hello";
    cr_assert_str_eq(my_revstr(str), "olleh");
}
