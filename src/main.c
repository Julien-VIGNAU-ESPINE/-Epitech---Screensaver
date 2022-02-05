/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main file
*/

#include "../include/includes.h"

int analyse_events(sfEvent event, sfRenderWindow *wndw)
{
    while (sfRenderWindow_pollEvent(wndw, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(wndw);
    }
    return 0;
}

int print_screensavers(void)
{
    my_putstr("Screen savers: \n");
    my_putstr("1 - Random bubbles pop everywhere.\n");
    my_putstr("2 - Bubbles pop only in the center.\n");
    my_putstr("3 - All the window changes color.\n");
    my_putstr("4 - Random bubbles and squares pop everywhere.\n");
    my_putstr("5 - Random squares pop everywhere.\n");
    return 0;
}

int check_args(int argc, char **argv)
{
    if (argc != 2) {
        my_printf("Error: ./my_screensaver must take exactly one parameter.\n");
        return 1;
    } if (argv[1][0] == '1' || argv[1][0] == '2' || argv[1][0] == '3'
    || argv[1][0] == '4' || argv[1][0] == '5')
        return 0;
    if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == 'e'
    && argv[1][3] == 'l' && argv[1][4] == 'p') {
        print_screensavers();
        return 1;
    }
    my_printf("This screen saver doesn't exit :(\n");
    my_putstr("Try <./my_screensaver -help> if you need help\n");
    return 1;
}

int main(int argc, char **argv)
{
    if (check_args(argc, argv) != 0)
        return 84;
    make_window(argv);
    return 0;
}
