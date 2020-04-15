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

void delete_head(List &lst){
    if (lst.head == nullptr){
        return;
    } else if (lst.head == lst.tail){
        delete lst.head;
        lst.head = lst.tail = nullptr;
    } else {
        Node* tmp = lst.head;
        lst.head = lst.head->next;
        delete tmp;
    }
}

pair<List, List> split(List &l){
    List l1, l2;
    list_initializing(l1);
    list_initializing(l2);
    bool check = true;
    Node* p = l.head;
    while (p != nullptr){
        if (check == true){
            add_tail(l1, p->val);
            delete_head(l);
            check = false;
        } else {
            add_tail(l2, p->val);
            delete_head(l);
            check = true;
        }
        p = p->next;
    }
    return pair<List, List>(l1,l2);
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
