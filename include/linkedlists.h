/*
** EPITECH PROJECT, 2018
** linkedlists.h
** File description:
** Includes for linked lists functions
*/

#ifndef LINKEDLISTS_H_
#define LINKEDLISTS_H_

#include "../lib/my/mylib.h"

typedef struct element_t element_t;
struct element_t
{
    int nb;
    element_t *next;
    element_t *prev;
};

typedef struct list_t list_t;
struct list_t
{
    element_t *first;
    element_t *last;
    int lenght;
};

/* src/linked_lists.c */
list_t *initialisation(int new_nb);
void insertion_end(list_t *list, int new_nb);
void delete_last(list_t *list);
void prinlist_t(list_t *list);
void destroy(list_t *list);

/* src/linked_list_following.c */
list_t *initialisation_empty(void);
void insertion_beg(list_t *list, int new_nb);
void delete_first(list_t *list);

#endif
