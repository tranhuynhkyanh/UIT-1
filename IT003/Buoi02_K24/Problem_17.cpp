/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
[]
template
###End banned keyword*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _add(node **, int);

void _merge(node *, node *, node**);

int _count(node *);

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _add(node **head, int x){
    while (*head && (*head)->data < x)
        head = &(*head)->link;
    if (*head && (*head)->data == x)
        return;
    node *p = create_node(x);
    p->link = *head;
    *head = p;
}

void _merge(node *head1, node *head2, node**head){
    *head = head1;
    node *p2 = head2;
    while (p2 != nullptr){
        _add(head,p2->data);
        p2 = p2->link;
    }
}

int _count(node *p){
    int dem = 0;
    while (p != nullptr){
        dem++;
        p = p->link;
    };
    return dem;
}

//###INSERT CODE HERE -

void _display(node *q)
{
    while(q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    node *first, *second, *third;
    first = second = third = NULL;

    _add(&first, 1);
    _add(&first, 2);
    _add(&first, 3);
    _add(&first, 4);
    _add(&first, 5);
    _add(&first, 6);
    _add(&first, 7);

    cout << "First linked list: " << endl;

    _display(first);

    cout << "No. of element in the First Linked List = " << _count(first) << endl;

    _add(&second, 8);
    _add(&second, 9);
    _add(&second, 3);
    _add(&second, 4);
    _add(&second, 5);
    _add(&second, 6);
    _add(&second, 7);

    cout << "Second linked list: " << endl;

    _display(second);

    cout << "No. of element in the Second Linked List = " << _count(second) << endl;

    _merge(first, second, &third);

    cout << "The concatenated list: " << endl;

    _display(third);

    cout << "No. of element in the Concatenated Linked List = " << _count(third) << endl;

    return 0;
}
