/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
struct
new
delete
###End banned keyword*/

#include <iostream>
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

bool is_palindrome(List &l){
    Node *p1 = l.head;
    Node *p2 = l.head;
    Node *_pre = nullptr;
    while (p2 != nullptr && p2->next != nullptr) {
        p2 = p2->next->next;
        Node *temp = p1;
        p1 = p1->next;
        temp->next = _pre;
        _pre = temp;
    }
    if (p2 != nullptr) {
        p1 = p1->next;
    }
    while (_pre != nullptr && p1 != nullptr) {
        if (_pre->val != p1->val)
            return false;
        _pre = _pre->next;
        p1 = p1->next;
    }
    return true;
}


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List l; list_initializing(l);

    int x;
    do{
        cin >> x;
        if (x != 0) add_tail(l, x);
        else break;
    } while(true);

    if (is_palindrome(l)) cout << "TRUE";
    else cout << "FALSE";
    cout << endl;

    return 0;
}
