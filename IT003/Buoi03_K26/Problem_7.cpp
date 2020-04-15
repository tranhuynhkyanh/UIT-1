/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
using
###End banned keyword*/
#include <iostream>
#include <tuple>
#include <utility>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::get;
using std::tuple;
using std::make_tuple;

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

void move_node_to_new_list(List &lst, Node*&p, List &lst2){
    lst.head = p->next;
    p->next = nullptr;
    if (lst2.head == nullptr){
        lst2.head = lst2.tail = p;
    } else {
        lst2.tail->next = p;
        lst2.tail = p;
    }
    p = lst.head;
}

tuple<List, List, List> partition(List& l, int x) {
    List l1; list_initializing(l1);
    List l2; list_initializing(l2);
    List l3; list_initializing(l3);
    Node* p = l.head;
    while (p != nullptr) {
        if (p->val < x)
            move_node_to_new_list(l, p, l1);
        else if (p->val == x)
            move_node_to_new_list(l, p, l2);
        else
            move_node_to_new_list(l, p, l3);
    }
    tuple <List, List, List> T = std::make_tuple(l1, l2, l3);
    return T;
}

void join(List& l, List& l1) {
    Node* q = l1.head;
    while (q != nullptr) {
        move_node_to_new_list(l1, q, l);
    }
}

int main()
{
    freopen("1.txt", "r", stdin);
    List l; list_initializing(l);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int x;
    do{
        cin >> x;
        if (x != 0) add_tail(l, x);
        else break;
    } while(true);


    do{
        cin >> x;
        if (x == 0) break;

        auto ls = partition(l, x);

        xuat(std::get<0>(ls));
        xuat(std::get<1>(ls));
        xuat(std::get<2>(ls));


        join(l, std::get<0>(ls));
        join(l, std::get<1>(ls));
        join(l, std::get<2>(ls));

    } while(true);

    return 0;
}



