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

void _delete(node **, int);

int _count(node *);

node* create_node(int value){
    node *p = new node;
    p->data = value;
    p->link = nullptr;
    return p;
}

void _add(node **head, int x){
    node *p = create_node(x);
    node *cur = *head;
    if (*head == nullptr || (*head)->data >= p->data){
        p->link = *head;
        *head = p;
    } else {
        while (cur->link != nullptr && cur->link->data < p->data){
            cur = cur->link;
        }
        p->link = cur->link;
        cur->link = p;
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

void _delete(node **head, int x){
    node* temp = *head, *prev;
    while (temp != nullptr && temp->data == x){
        *head = temp->link;
        free(temp);
        temp = *head;
    }
    while (temp != nullptr){
        while (temp != nullptr && temp->data != x){
            prev = temp;
            temp = temp->link;
        }
        if (temp == nullptr) return;
        prev->link = temp->link;
        free(temp);
        temp = prev->link;
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
    node *p;
    p = NULL;

    _add(&p, 5);
    _add(&p, 1);
    _add(&p, 6);
    _add(&p, 1);
    _add(&p, 4);
    _add(&p, 7);
    _add(&p, 1);
    _add(&p, 9);
    _add(&p, 5);
    _add(&p, 4);

    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    _delete(&p, 1);
    _delete(&p, 10);
    _delete(&p, 5);


    _display(p);

    cout << "No. of element in the Linked List = " << _count(p) << endl;

    return 0;
}
