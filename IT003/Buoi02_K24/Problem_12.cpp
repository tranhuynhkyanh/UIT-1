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

struct linked_list
{
    struct node *head;
};

void _append(linked_list &, int);

void _addatbeg(linked_list &, int);

void _addafter(linked_list, int, int);

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _append(linked_list &l, int x){
    node *p = create_node(x);
    if (l.head == nullptr){
        l.head = p;
    } else {
        node *t = l.head;
        while (t->link != nullptr){
            t = t->link;
        }
        t->link = p;
    }
}

void _addatbeg(linked_list &l, int x){
    node *p = create_node(x);
    if (l.head == nullptr){
        l.head = p;
    } else {
        p->link = l.head;
        l.head = p;
    }
}

void _addafter(linked_list l, int vitri, int x){
    node *p = create_node(x);
    while (vitri--){
        if (vitri == 0){
            l.head = l.head->link;
            p->link = l.head->link;
            l.head->link = p;
            l.head = p;
        } else
            l.head = l.head->link;
    }
}


//###INSERT CODE HERE -

void _display(linked_list ll)
{
    node *q = ll.head;

    while(q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    linked_list ll;
    ll.head = NULL;

    _append(ll, 1);
    _append(ll, 2);
    _append(ll, 3);
    _append(ll, 4);
    _append(ll, 17);

    _display(ll);

    _addatbeg(ll, 999);
    _addatbeg(ll, 888);
    _addatbeg(ll, 777);

    _display(ll);

    _addafter(ll, 7, 0);
    _addafter(ll, 2, 1);
    _addafter(ll, 1, 99);

    _display(ll);

    return 0;
}
