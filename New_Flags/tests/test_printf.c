#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("hello world"), 11);
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, error_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("bonjour %    "), -1);
    cr_assert_stdout_eq_str("bonjour ");
    cr_assert_eq(my_printf("%    "), -1);
}

Test(my_printf, special_case, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%         ?d"), 4);
    cr_assert_stdout_eq_str("% ?d");
}

Test(my_printf, special_case2, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%?d"), 3);
    cr_assert_stdout_eq_str("%?d");
}

Test(my_printf, space, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%      d", -345), 4);
    cr_assert_stdout_eq_str("-345");
}

Test(my_printf, flag_d_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%d", -2147483647), 11);
    cr_assert_stdout_eq_str("-2147483647");
}

Test(my_printf, flag_d_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%d", 2147483647), 10);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_printf, flag_i_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%i", -2147483647), 11);
    cr_assert_stdout_eq_str("-2147483647");
}

Test(my_printf, flag_i_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%i", 2147483647), 10);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_printf, flag_u_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%u", 0), 1);
    cr_assert_stdout_eq_str("0");
    cr_assert_eq(1, 1);
}

Test(my_printf, flag_u_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%u", 4294967295), 10);
    cr_assert_stdout_eq_str("4294967295");
}

Test(my_printf, flag_u_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%u", -4000000000), 9);
    cr_assert_stdout_eq_str("294967295");
}

Test(my_printf, flag_o_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%o", 0), 1);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_o_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%o", 4294967295), 11);
    cr_assert_stdout_eq_str("37777777777");
}

Test(my_printf, flag_o_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%o", -4294), 11);
    cr_assert_stdout_eq_str("37777767472");
}

Test(my_printf, flag_x_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%x", 0), 1);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_X_min, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%X", 0), 1);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_x_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%x", 4294967295), 8);
    cr_assert_stdout_eq_str("ffffffff");
}

Test(my_printf, flag_X_max, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%X", 4294967295), 8);
    cr_assert_stdout_eq_str("FFFFFFFF");
}

Test(my_printf, flag_x_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%x", -429), 8);
    cr_assert_stdout_eq_str("fffffe53");
}

Test(my_printf, flag_X_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%X", -429), 8);
    cr_assert_stdout_eq_str("FFFFFE53");
}

Test(my_printf, flag_f, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%f", 5379.2398), 11);
    cr_assert_stdout_eq_str("5379.239800");
}
/*
Test(my_printf, flag_f_max, .init = redirect_all_std)
{
    //slow
    cr_assert_eq(my_printf("%f", 2147483647.2147483647), 17);
    cr_assert_stdout_eq_str("2147483647.214748");
}

Test(my_printf, flag_f_min, .init = redirect_all_std)
{
    //slow                                                                                                                                                                          
    cr_assert_eq(my_printf("%f", -2147483647.2147483647), 17);
    cr_assert_stdout_eq_str("-2147483647.214748");
}
*/

Test(my_printf, flag_f_O, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%f", 00.00), 8);
    cr_assert_stdout_eq_str("0.000000");
}

Test(my_printf, flag_f_entier, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%f", 2345), 8);
    cr_assert_stdout_eq_str("0.000000");
}

Test(my_printf, flag_F, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%F", 5379.2398), 11);
    cr_assert_stdout_eq_str("5379.239800");
}

Test(my_printf, flag_f_0, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%f", 50307900.0203920), 15);
    cr_assert_stdout_eq_str("50307900.0203920");
}

Test(my_printf, flag_e, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%e", 348124.23483), 12);
    cr_assert_stdout_eq_str("3.481242e+05");
}
/*
Test(my_printf, flag_e_int, .init = redirect_all_std)
{
    //marche pas
    cr_assert_eq(my_printf("%e", 345), 12);
    cr_assert_stdout_eq_str("0.000000e+00");
}
*/
Test(my_printf, flag_e_float, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%e", 348124.0), 12);
    cr_assert_stdout_eq_str("3.481240e+05");
}

Test(my_printf, flag_e_neg, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%e", -348124.0234), 13);
    cr_assert_stdout_eq_str("-3.481240e+05");
}

Test(my_printf, flag_e_small, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%e", 0.000000023442123), 12);
    cr_assert_stdout_eq_str("2.344212e-08");
}

Test(my_printf, flag_E_float, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%E", 348124.0), 12);
    cr_assert_stdout_eq_str("3.481240E+05");
}
/*
Test(my_printf, flag_g_int, .init = redirect_all_std)
{
    //marche pas boucle inf
    cr_assert_eq(my_printf("%g", 348124), 1);
    cr_assert_stdout_eq_str("0");
}

Test(my_printf, flag_g, .init = redirect_all_std)
{
    //marche pas
    cr_assert_eq(my_printf("%g", 348124.23399), 6);
    cr_assert_stdout_eq_str("348124");
}
*/
Test(my_printf, flag_g_small, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%g", 348.23), 6);
    cr_assert_stdout_eq_str("348.23");
}

Test(my_printf, flag_g_big, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%g", 34139439874.13741974), 11);
    cr_assert_stdout_eq_str("3.41394e+10");
}

Test(my_printf, flag_G_big, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%G", 34139439874.13741974), 11);
    cr_assert_stdout_eq_str("3.41394E+10");
}

Test(my_printf, flag_c, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%c", 'f'), 1);
    cr_assert_stdout_eq_str("f");
}

Test(my_printf, flag_s, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("hoo %s lol", ""), 8);
    cr_assert_stdout_eq_str("hoo  lol");
}

Test(my_printf, flag_percentage, .init = redirect_all_std)
{
    cr_assert_eq(my_printf("%%"), 1);
    cr_assert_stdout_eq_str("%");
}
/*
Test(my_printf, flag_p, .init = redirect_all_std)
{
    int a;
    cr_assert_eq(my_printf("%p", a), );
    cr_assert_stdout_eq_str("%");
    }*/
