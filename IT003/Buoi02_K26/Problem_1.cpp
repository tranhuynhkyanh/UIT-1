/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <iostream>
using  std::cin;
using  std::cout;
using  std::endl;


//###INSERT CODE HERE -

struct node{
    int value;
    node* next;
};

struct list{
    node* head;
    node* tail;
};

void initialize_list(list &l){
    l.head = nullptr;
    l.tail = nullptr;
}

node* create_node(int x){
    node* p;
    p = new node;
    p->value = x;
    p->next = nullptr;
    return p;
}

void add_front(list &l, int x){
    node* p;
    p = create_node(x);
    if (l.head == nullptr){
        l.head = p;
        l.tail = l.head;
    } else {
        p->next = l.head;
        l.head = p;
    }
}

void add_back(list &l, int x){
    node* p;
    p = create_node(x);
    if (l.head == nullptr){
        l.head = p;
        l.tail = l.head;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}


int main()
{
    list a;
    initialize_list(a);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int x, b, c;
    do {
        cin >> x;
        switch (x){
        case 0:
            cin >> b;
            add_front(a, b);
            break;
        case 1:
            cin >> b;
            add_back(a, b);
            break;
        }
    } while (x != 3);

    for (node* it = a.head; it ; it = it->next){
        cout << it->value << " ";
    }
    return 0;
}
