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

void _push(node **, int);
int _pop(node **);

//###INSERT CODE HERE -

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _push(node **head, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
    } else {
        p->link = (*head);
        (*head) = p;
    }
}

int _pop(node **head){
    node *p = *head;
    int _result = p->data;
    *head = p->link;
    delete p;
    return _result;
}


int _count(node *q)
{
    int c = 0;
    while(q != NULL)
    {
        q = q->link;
        c++;
    }
    return c;
}

void _stack_display(node *q)
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
    node *top;
    int item;

    top = NULL;

    _push(&top, 11);
    _push(&top, 12);
    _push(&top, 13);
    _push(&top, 14);
    _push(&top, 15);
    _push(&top, 16);
    _push(&top, 17);

    _stack_display(top);

    cout << "No. of element in the Stack = " << _count(top) << endl;

    cout << "Items extracted from the Stack: " << endl;

    item = _pop(&top);
    cout << item << endl;

    item = _pop(&top);
    cout << item << endl;

    item = _pop(&top);
    cout << item << endl;

    _stack_display(top);

    cout << "No. of element in the Stack = " << _count(top) << endl;

    return 0;
}
