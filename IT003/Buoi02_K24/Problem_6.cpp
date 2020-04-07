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

void _append(node **, int);

void _addatbeg(node **, int);

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _append(node **head, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
    } else {
        node *t = *head;
        while (t->link != nullptr){
            t = t->link;
        }
        t->link = p;
    }
}

void _addatbeg(node **head, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
    } else {
        p->link = (*head);
        (*head) = p;
    }
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
    node *head;
    head = NULL;

    _append(&head, 1);
    _append(&head, 2);
    _append(&head, 3);
    _append(&head, 4);
    _append(&head, 17);

    _display(head);

    _addatbeg(&head, 999);
    _addatbeg(&head, 888);
    _addatbeg(&head, 777);

    _display(head);

    return 0;
}
