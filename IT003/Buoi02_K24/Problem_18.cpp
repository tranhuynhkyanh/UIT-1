/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
printf
[]
template
###End banned keyword*/

#include <iostream>
#include <stdio.h>

using namespace std;

struct polynode
{
    float coeff;
    int exp;
    struct polynode *link;
};

void _poly_append(polynode **, float, int);
void _poly_addition(polynode *, polynode *, polynode **);
void _display_poly(polynode *);

polynode* create_polynode(float value1, int value2){
    polynode *p = new polynode;
    p->coeff = value1;
    p->exp = value2;
    p->link = nullptr;
    return p;
}

void _poly_append(polynode **head, float value1, int value2){
    while (*head && (*head)->exp > value2)
        head = &(*head)->link;
    if (*head && (*head)->exp == value2){
        polynode *p = create_polynode(value1, value2);
        (*head)->coeff = p->coeff + (*head)->coeff;
    } else {
        polynode *p = create_polynode(value1, value2);
        p->link = *head;
        *head = p;
    }
}

void _poly_addition(polynode *head1, polynode *head2, polynode **head){
    *head = head1;
    polynode *p2 = head2;
    while (p2 != nullptr){
        _poly_append(head,p2->coeff,p2->exp);
        p2 = p2->link;
    }
}


//###INSERT CODE HERE -

void _display_poly(polynode *q)
{
    while(q != NULL)
    {
        printf("%.1f x^%d : ", q->coeff, q->exp);
        q = q->link;
    }
    cout << "\n";
}

int main()
{
    polynode *first, *second, *total;
    first = second = total = NULL;

    _poly_append(&first, 1.4, 5);
    _poly_append(&first, 1.5, 4);
    _poly_append(&first, 1.7, 2);
    _poly_append(&first, 1.8, 1);
    _poly_append(&first, 1.9, 0);

    _display_poly(first);

    _poly_append(&second, 1.5, 6);
    _poly_append(&second, 2.5, 5);
    _poly_append(&second, -3.5, 4);
    _poly_append(&second, 4.5, 3);
    _poly_append(&second, 6.5, 1);

    _display_poly(second);

    _poly_addition(first, second, &total);

    _display_poly(total);

    return 0;
}
