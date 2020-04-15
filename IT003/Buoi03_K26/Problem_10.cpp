/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
struct
classs
new
delete
cout
cin
printf
###End banned keyword*/

#include <iostream>
#include <algorithm>

using namespace std;

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

List merge_2_sorted_lists(List &lst, List &lst2){
    List result;
    list_initializing(result);
    Node* p1 = lst.head;
    Node* p2 = lst2.head;
    if (!p1) return lst2;
    if (!p2) return lst;
    Node* tmp;
    if (p1->val <= p2->val) {
        tmp = p1;
        p1 = tmp->next;
    }
    else {
        tmp = p2;
        p2 = tmp->next;
    }
    Node* _sort = tmp;
    while (p1 && p2) {
        if (p1->val <= p2->val) {
            tmp->next = p1;
            tmp = p1;
            p1 = tmp->next;
        }
        else {
            tmp->next = p2;
            tmp = p2;
            p2 = tmp->next;
        }
    }
    if (p1 == nullptr) tmp->next = p2;
    if (p2 == nullptr) tmp->next = p1;
    while (_sort != NULL) {
        add_tail(result, _sort->val);
        _sort = _sort->next;
    }
    return result;
}


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List lists[2];

    for(int i = 0; i < 2; i++){
        list_initializing(lists[i]);
        int x;
        do{
            cin >> x;
            if (x != 0) add_tail(lists[i], x);
            else break;
        } while(true);
    }

    List l = merge_2_sorted_lists(lists[0], lists[1]);

    xuat(l);

    return 0;
}
