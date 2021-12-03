/*
** EPITECH PROJECT, 2021
** includes 
** File description:
** includes
*/

/*                                                                                                                   
** framebuffer.h                                                                                                     
*/
#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_
#include <SFML/Graphics.h>
struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
#endif    /* FRAMEBUFFER_H_ */
/*                                                                                                                  
** end of framebuffer.h                                                                                              
*/

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void make_window1(void);
void make_window2(void);
void make_window3(void);
void make_window4(void);
int draw_circle(framebuffer_t *framebuffer, int x, int y, int rad, sfColor color);
int time_circle(framebuffer_t *framebuffer, int x, int y, int rad, int index);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
void make_diagonal(framebuffer_t *framebuffer, unsigned int size, unsigned int x, unsigned int y, sfColor color);
int bubble_pop(framebuffer_t *framebuffer);
int bubble_pop_refresh(framebuffer_t *framebuffer);
void refresh_buffer(framebuffer_t *framebuffer);
void make_square(framebuffer_t *framebuffer, unsigned int size, unsigned int x, unsigned int y, sfColor color);
int square_pop(framebuffer_t *framebuffer);
int time_square(framebuffer_t *framebuffer, int x, int y, int rad, int index);
void choice(char nb);
int time_square2(framebuffer_t *framebuffer, int x, int y, int index);
int flag(framebuffer_t *framebuffer);
