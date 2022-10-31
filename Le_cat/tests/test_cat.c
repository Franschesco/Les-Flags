/*
** EPITECH PROJECT, 2022
** test_cat
** File description:
** good prog
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test (cat, catcattest, .init=redirect_stdout)
{
    char *str[2] = {"./cat", "test.txt"};
    int result = main_2(2, str);
    cr_assert_stdout_eq_str("Salut à tous je suis ton père !\n");
    cr_assert_eq(result, 0);
}

Test (cat, catcattest_2, .init=redirect_stdout)
{
    char *str[2] = {"./cat", "lala.c"};
    int result = main_2(2, str);
    cr_assert_stdout_eq_str("Error with open\n");
    cr_assert_eq(result, 2);
}
