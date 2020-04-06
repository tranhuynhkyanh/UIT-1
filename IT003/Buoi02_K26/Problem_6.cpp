/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
###End banned keyword*/

#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
};

struct List{
    Node *head, *tail;
};

void list_initializing(List &l){
    l.head = l.tail = NULL;
}
void add_tail(List &l, int x){
    Node *p = new Node;
    p->val = x;
    p->next = NULL;

    if (l.head == NULL){
        l.head = l.tail = p;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void xuat(List &l){
    for(Node *p = l.head; p != NULL; p = p->next){
        cout << p->val << " ";
    }
    cout << endl;
}

//###INSERT CODE HERE -

void reverse_list(List &l){
    Node *_pre, *_cur, *_next;
    _pre = nullptr;
    _cur = l.head;
    _next = nullptr;
    while (_cur != nullptr){
        _next = _cur->next;
        _cur->next = _pre;
        _pre = _cur;
        _cur = _next;
    }
    l.head = _pre;
}


int main()
{
    List l; list_initializing(l);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int x;
    do{
        cin >> x;
        if (x != 0) add_tail(l, x);
        else break;
    } while(true);

    for(int i = 0; i < 51; i++) reverse_list(l);

    xuat(l);

    return 0;
}
