/*                                                                                                                                                                                                                                           ** EPITECH PROJECT, 2024                                                                                                                                                                                                                     ** test_my_strcpy                                                                                                                                                                                                                           ** File description:                                                                                                                                                                                                                         ** Nothing                                                                                                                                                                                                                                   */

#include <criterion/criterion.h>
Test (my_strcpy, copies_a_string_into_another_empty_array)
{

char dest [11] = {0};
char src  [11] = {0};

my_strcpy(dest, "HelloWorld", 5);
cr_assert_str_eq (dest, "HelloWorld");

}
