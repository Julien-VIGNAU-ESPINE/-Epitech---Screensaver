/*
** EPITECH PROJECT, 2022
** loop.c
** File description:
** screen savers loop
*/

#include "../include/includes.h"

int choose_animation3(char **argv, framebuffer_t *framebuffer
, sfTexture *texture)
{
    if (argv[1][0] == '5')
        print_square(framebuffer, texture);
    return 0;
}
int choose_animation2(char **argv, framebuffer_t *framebuffer
, sfTexture *texture)
{
    if (argv[1][0] == '3')
        change_all_color(framebuffer, texture);
    else if (argv[1][0] == '4')
        print_circle_or_square(framebuffer, texture);
    else 
        choose_animation3(argv, framebuffer, texture);
    return 0;
}

int choose_animation(char **argv, framebuffer_t *framebuffer
, sfTexture *texture)
{
    if (argv[1][0] == '1')
        print_circle(framebuffer, texture);
    else if (argv[1][0] == '2')
        print_fixed_circle(framebuffer, texture);
    else
        choose_animation2(argv, framebuffer, texture);
    return 0;
}

int count_time(sfClock *clock, char **argv, sfTexture *texture
, framebuffer_t *framebuffer, float seconds)
{
    if (argv[1][0] == '1' || argv[1][0] == '4' || argv[1][0] == '5') {
        if (seconds > 1.0 / 1000) {
            choose_animation(argv, framebuffer, texture);
            sfClock_restart(clock);
        }
    } if (argv[1][0] == '2') {
        if (seconds > 1.0 / 7) {
            choose_animation(argv, framebuffer, texture);
            sfClock_restart(clock);
        }
    } if (argv[1][0] == '3') {
        if (seconds > 1.0 / 2) {
            choose_animation(argv, framebuffer, texture);
            sfClock_restart(clock);
        }
    }
    return 0;
}

int screen_loop(sfRenderWindow *wndw, sfEvent event, framebuffer_t *framebuffer
, sfTexture *texture, sfSprite *sprite, char **argv)
{
    sfClock *clock = NULL;
    sfTime timer;
    float seconds = 0.f;

    clock = sfClock_create();
    while (sfRenderWindow_isOpen(wndw)) {
        sfRenderWindow_clear(wndw, (sfColor){30, 3, 60, 100});
        analyse_events(event, wndw);
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
        count_time(clock, argv, texture, framebuffer, seconds);
        sfRenderWindow_drawSprite(wndw, sprite, NULL);
        sfRenderWindow_display(wndw);
    }
    sfClock_destroy(clock);
    return 0;
}