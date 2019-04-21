/*
** EPITECH PROJECT, 2018
** linked_lists.c
** File description:
** basics functions for linked_lists
*/

#include "../include/linkedlists.h"

list_t *initialisation(int new_nb)
{
    list_t *list = malloc(sizeof(*list));
    element_t *element = malloc(sizeof(*element));

    if (list == NULL || element == NULL)
        return (NULL);
    element->nb = new_nb;
    element->next = NULL;
    element->prev = NULL;
    list->first = element;
    list->last = element;
    list->lenght = 1;
    return (list);
}

void insertion_end(list_t *list, int new_nb)
{
    element_t *new = malloc(sizeof(*new));

    if (new == NULL)
        return;
    new->nb = new_nb;
    if (list->first == NULL && list->last == NULL) {
        new->prev = NULL;
        list->first = new;
        list->last = new;
        new->next = NULL;
    } else {
        new->prev = list->last;
        list->last->next = new;
        new->next = NULL;
        list->last = new;
    }
    list->lenght = list->lenght + 1;
}

void delete_last(list_t *list)
{
    element_t *to_delete;

    to_delete = list->last;
    to_delete->prev->next = NULL;
    list->last = to_delete->prev;
    list->lenght = list->lenght - 1;
    free(to_delete);
}

void prinlist_t(list_t *list)
{
    element_t *actual;

    actual = list->first;
    while (actual != NULL) {
        my_printf("%d -> ", actual->nb);
        actual = actual->next;
    }
    my_printf("NULL\n");
}

void destroy(list_t *list)
{
    element_t *actual;
    element_t *next;

    actual = list->first;
    while (actual != NULL) {
        next = actual->next;
        free(actual);
        actual = next;
    }
    free(list);
}
