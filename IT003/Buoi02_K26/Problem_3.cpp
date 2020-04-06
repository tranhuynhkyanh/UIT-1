/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
struct
classs
new
delete
using
for
while
goto
###End banned keyword*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Node{
    int val;
    Node* next;
};

struct List{
    Node *head, *tail;
    int x;
};

Node* create_node(int x){
    Node* p;
    p = new Node;
    p->val = x;
    p->next = nullptr;
    return p;
}

void list_initializing(List &l){
    l.head = l.tail = NULL;
}

void add_tail(List &l, int x){
    Node* p;
    p = create_node(x);
    if (l.head == nullptr){
        l.head = p;
        l.tail = l.head;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void xuat(List &l){
//Hàm này cũng đã được viết rất chuẩn, sinh viên không cần quan tâm
}

int length(List l){
    if (l.head == nullptr)
        return 0;
    else {
        l.head = l.head->next;
        return(length(l)+1);
    }
}

//###INSERT CODE HERE -


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List l;

    list_initializing(l);
    int x;
    do{
        cin >> x;
        if (x != -1) add_tail(l, x);
        else break;
    } while(true);

    cout << length(l);

    return 0;
}
