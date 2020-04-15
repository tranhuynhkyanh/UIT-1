/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
using
###End banned keyword*/

#include <iostream>
#include <utility>
using std::cin;
using std::cout;
using std::endl;
using std::pair;

struct Node{
    int val;
    Node* next;
};

struct List{
    Node *head, *tail;
};

void list_initializing(List &l){
    l.head = l.tail = NULL;
}
void add_tail(List &l, int x){
    Node*p = new Node;
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

void add_tail_and_delete(List &lst, List &save)
{
    if (lst.head == nullptr)
        return;
    Node *prev = lst.head;
    Node *node = lst.head->next;
    while (prev != nullptr && node != nullptr){
        prev->next = node->next;
        add_tail(save, node->val);
        delete node;
        prev = prev->next;
        if (prev != nullptr)
            node = prev->next;
    }
}

pair<List, List> split(List &l){
    List l1;
    list_initializing(l1);
    add_tail_and_delete(l, l1);
    return pair<List, List>(l, l1);
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


    pair<List, List> ls = split(l);

    xuat(ls.first);
    xuat(ls.second);

    return 0;
}
