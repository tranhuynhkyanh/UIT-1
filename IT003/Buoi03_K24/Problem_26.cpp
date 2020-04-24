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

void _addqatend(node **, node **, int);
void _addqatbeg(node **, node **, int);
int _delqatbeg(node **, node **);
int _delqatend(node **, node **);

//###INSERT CODE HERE -

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _addqatend(node **head, node **tail, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
        *tail = *head;
    } else {
        (*tail)->link = p;
        (*tail) = p;
    }
}
void _addqatbeg(node **head, node **tail, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
        *tail = *head;
    } else {
        p->link = (*head);
        (*head) = p;
    }
}

int _delqatbeg(node **head, node **tail){
    node *p = *head;
    int _result = p->data;
    *head = p->link;
    delete p;
    return _result;
}

int _delqatend(node **head, node **tail){
    node *p = *tail;
    int _result = p->data;
    node *q = *head;
    while (q->link->link != nullptr){
        q = q->link;
    }
    delete p;
    q->link = nullptr;
    (*tail) = q;
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

void _q_display(node *q)
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
    node *front, *rear;
    int item;

    front = rear = NULL;

    _addqatend(&front, &rear, 11);
    _addqatbeg(&front, &rear, 10);
    _addqatend(&front, &rear, 12);
    _addqatend(&front, &rear, 13);
    _addqatend(&front, &rear, 14);
    _addqatend(&front, &rear, 15);
    _addqatend(&front, &rear, 16);
    _addqatend(&front, &rear, 17);

    _q_display(front);

    cout << "No. of element in the Deque = " << _count(front) << endl;

    cout << "Items extracted from the Deque: " << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatbeg(&front, &rear);
    cout << item << endl;

    item = _delqatend(&front, &rear);
    cout << item << endl;

    _q_display(front);

    cout << "No. of element in the Deque = " << _count(front) << endl;

    return 0;
}
