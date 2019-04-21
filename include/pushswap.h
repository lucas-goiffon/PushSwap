/*
** EPITECH PROJECT, 2018
** pushswap.h
** File description:
** Includes for PushSwap project
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include "../lib/my/mylib.h"
#include "linkedlists.h"
#include <unistd.h>

/* src/main_functions.c */
void swap_s(list_t *list);
void rotate_rr(list_t *list);
void rotate_r(list_t *list);
void exchange_p(list_t *src, list_t *dest);
void exchange_p_following(list_t *src, list_t *dest);

/* src/pushswap.c */
void sort(list_t *l_a, list_t *l_b);
void end_sort(list_t *l_a, list_t *l_b);
int verify_beg_sort(int ac, char **av);
int error(int ac, char **av, int *r);

#endif