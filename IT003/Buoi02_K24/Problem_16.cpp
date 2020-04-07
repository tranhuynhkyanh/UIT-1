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

void _addatbeg(node **, int);

void _reverse(node **);

int _count(node *);

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
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

int _count(node *p){
    int dem = 0;
    while (p != nullptr){
        dem++;
        p = p->link;
    };
    return dem;
}

void _reverse(node **head){
    node *_pre, *_cur, *_next;
    _pre = nullptr;
    _cur = *head;
    _next = nullptr;
    while (_cur != nullptr){
        _next = _cur->link;
        _cur->link = _pre;
        _pre = _cur;
        _cur = _next;
    }
    *head = _pre;
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
    node *p;
    p = NULL;

    _addatbeg(&p, 1);
    _addatbeg(&p, 2);
    _addatbeg(&p, 3);
    _addatbeg(&p, 4);
    _addatbeg(&p, 5);
    _addatbeg(&p, 6);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    _reverse(&p);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    return 0;
}
