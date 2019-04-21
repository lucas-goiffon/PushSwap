/*
** EPITECH PROJECT, 2018
** pushswap.c
** File description:
** Main file for PushSwap project
*/

#include "../include/pushswap.h"
#include "../include/linkedlists.h"

void sort(list_t *l_a, list_t *l_b)
{
    element_t *actual = l_a->first->next;
    int stock;
    int scount = 0;

    stock = l_a->first->nb;
    for (int i = 1; actual != NULL; i = i + 1) {
        if (actual->nb < stock) {
            stock = actual->nb;
            scount = i;
        }
        actual = actual->next;
    }
    for (int i = 0; i < scount; i = i + 1) {
        rotate_r(l_a);
        write(1, "ra ", 3);
    }
    exchange_p(l_a, l_b);
    write(1, "pb ", 3);
    scount = 0;
    actual = l_a->first;
    if (l_a->lenght > 0)
        sort(l_a, l_b);
}

void end_sort(list_t *l_a, list_t *l_b)
{
    int lenght = 0;
    int ssize = 0;

    lenght = l_b->lenght;
    while (ssize < lenght) {
        exchange_p(l_b, l_a);
        write(1, "pa", 2);
        ssize = ssize + 1;
        if (ssize < lenght)
            write(1, " ", 1);
    }
}

int verify_beg_sort(int ac, char **av)
{
    int r = 0;
    int bigger = my_getnbr(av[1]);

    for (int i = 2; i < ac && r == 0; i = i + 1) {
        if (my_getnbr(av[i]) >= bigger)
            bigger = my_getnbr(av[i]);
        else
            r = 1;
    }
    return (r);
}

int error(int ac, char **av, int *r)
{
    if (ac <= 1) {
        *r = 84;
        return (84);
    }
    else if (verify_beg_sort(ac, av) == 0) {
        my_printf("\n");
        *r = 0;
        return (0);
    }
    else
        return (1);
}

int main(int ac, char **av)
{
    list_t *l_a;
    list_t *l_b = initialisation_empty();
    int r = 0;

    if (error(ac, av, &r) != 1) {
        free(l_b);
        return (r);
    }
    l_a = initialisation(my_getnbr(av[1]));
    if (l_a == NULL || l_b == NULL)
        return (84);
    for (int i = 2; i < ac; i = i + 1)
        insertion_end(l_a, my_getnbr(av[i]));
    sort(l_a, l_b);
    end_sort(l_a, l_b);
    my_printf("\n");
    destroy(l_a);
    destroy(l_b);
    return (0);
}
