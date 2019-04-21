/*
** EPITECH PROJECT, 2018
** linked_lists_following.c
** File description:
** Following of linked_lists functions
*/

#include "../include/linkedlists.h"

void insertion_beg(list_t *list, int new_nb)
{
    element_t *new = malloc(sizeof(*new));

    if (new == NULL)
        return;
    new->nb = new_nb;
    new->prev = NULL;
    if (list->first == NULL && list->last == NULL) {
        list->first = new;
        list->first->next = NULL;
        list->last = new;
    } else {
        list->first->prev = new;
        new->next = list->first;
        list->first = new;
    }
    list->lenght = list->lenght + 1;
}

void delete_first(list_t *list)
{
    element_t *to_delete;

    to_delete = list->first;
    to_delete->next->prev = NULL;
    list->first = to_delete->next;
    list->lenght = list->lenght - 1;
    free(to_delete);
}

list_t *initialisation_empty(void)
{
    list_t *list = malloc(sizeof(*list));

    if (list == NULL)
        return (NULL);
    list->first = NULL;
    list->last = NULL;
    list->lenght = 0;
    return (list);
}
