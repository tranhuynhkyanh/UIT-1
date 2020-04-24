/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
for
while
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

void _addq(node **, node **, int);
int _delq(node **, node **);

//###INSERT CODE HERE -

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _addq(node **head, node **tail, int x){
    node *p = create_node(x);
    if (*head == nullptr){
        *head = p;
        *tail = *head;
    } else {
        (*tail)->link = p;
        (*tail) = p;
    }
}

int _delq(node **head, node **tail){
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

    _addq(&front, &rear, 11);
    _addq(&front, &rear, 12);
    _addq(&front, &rear, 13);
    _addq(&front, &rear, 14);
    _addq(&front, &rear, 15);
    _addq(&front, &rear, 16);
    _addq(&front, &rear, 17);

    _q_display(front);

    cout << "No. of element in the Queue = " << _count(front) << endl;

    cout << "Items extracted from the Queue: " << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    item = _delq(&front, &rear);
    cout << item << endl;

    _q_display(front);

    cout << "No. of element in the Queue = " << _count(front) << endl;

    return 0;
}
