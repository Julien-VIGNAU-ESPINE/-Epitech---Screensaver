/*
** EPITECH PROJECT, 2021
** libmy header
** File description:
** a header that prototype every fonctions of the lib my
*/

#ifndef MY_H_
    #define MY_H_
    #define _LOW_CHAR_ (str[index - 1] >= 'a' && str[index - 1] <= 'z')
    #define _NUM_ (str[index - 1] >= '0' && str[index - 1] <= '9')
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
void my_print_params(int lenght, char **array);
void my_rev_params(int lenght, char **array);
void my_sort_params(int lenght, char **array);
int str_len(char *str);
char *my_strdup(char const *src);
void my_memset(char *s, int c, int n);
int my_strtol(char *str, int *end_index);
int unsigned_nbr_to_int(char *str_nbr);
char *dup_nchar(char *str, int n);
char is_number(char input);
int my_revstrtol(char *str, int *start);
char *my_inttos(int nbr);
int my_intlen(int nbr);
int my_printf(char *var, ...);
int my_put_unnbr(unsigned int n);
int convert_min(int nb, int base);
int convert_maj(int nb, int base);
#endif/* MY_H_ */
