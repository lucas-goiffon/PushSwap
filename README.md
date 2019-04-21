# PushSwap Project (Realised 17.12.18)
###### {EPITECH First Year Project}

This project made me discover the Linked Lists. The goal was to sort a Linked List containing an a certain amount of numbers by using only some operations described below.

## Instructions
You only have to clone and run this command:
```
make
```

## Usage
./push_swap [number1] [number2] ...

There are files in bonus directory containing different lists of numbers.

## Authorized Operations
We were allowed to use only 2 linked lists (l_a and l_b). At the beginning of the program, l_a contain all the numbers.

  - **sa**
    swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
  - **sb**
    swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
  - **sc**
    sa and sb at the same time.
  - **pa**
    take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).
  - **pb**
    take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).
  - **ra**
    rotate l_a toward the beginning, the first element will become the last.
  - **rb**
    rotate l_b toward the beginning, the first element will become the last.
  - **rr**
    ra and rb at the same time.
  - **rra**
    rotate l_a toward the end, the last element will become the first.
  - **rrb**
    rotate l_b toward the end, the last element will become the first.
  - **rrr**
    rra and rrb at the same time.

## No memory leaks
![Valgrind Screenshot](/bonus/screenshots/valgrind.png?raw=true "Valgrind Screenshot")

## Author
* **Lucas GOIFFON** - [lucas-goiffon](https://github.com/lucas-goiffon)
