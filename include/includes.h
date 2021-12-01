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
void make_window(void);
int draw_circle(framebuffer_t *framebuffer, int x, int y, int rad, sfColor color);
int time_circle(framebuffer_t *framebuffer, int x, int y, int rad, int index);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
void make_diagonal(framebuffer_t *framebuffer, unsigned int size, unsigned int x, unsigned int y, sfColor color);
int bubble_pop(framebuffer_t *framebuffer);
void refresh_buffer(framebuffer_t *framebuffer);
