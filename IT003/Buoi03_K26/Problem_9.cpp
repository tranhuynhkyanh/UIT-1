/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

//###INSERT CODE HERE -

struct Node{
    int val;
    Node* next;
};

struct List{
    Node* head;
    Node* tail;
};

void Init(List &lst){
    lst.head = nullptr;
    lst.tail = nullptr;
}

Node* create_node(int x){
    Node* p = new Node;
    p->val = x;
    p->next = nullptr;
    return p;
}

void add_front(List &lst, int x){
    Node* p = create_node(x);
    if (lst.head == nullptr){
        lst.head = p;
        lst.tail = lst.head;
    } else {
        p->next = lst.head;
        lst.head = p;
    }
}

void add_back(List &lst, int x){
    Node* p = create_node(x);
    if (lst.head == nullptr){
        lst.head = p;
        lst.tail = lst.head;
    } else {
        lst.tail->next = p;
        lst.tail = p;
    }
}


void print_list(List lst){
    Node *p = lst.head;
    while (p != nullptr){
        cout << p->val << " ";
        p = p->next;
    }
}

Node* check_node(List lst, int vt_value){
    if (lst.head == nullptr)
        return nullptr;
    else {
        Node* p = lst.head;
        while (p != nullptr){
            if (p->val == vt_value) return p;
            p = p->next;
        }
    }
    return nullptr;
}

void add_after(List &lst, int vt_value, int x){
    Node* tmp = check_node(lst, vt_value);
    if (tmp == nullptr){
        add_front(lst, x);
    } else {
        Node* p = create_node(x);
        if (tmp == lst.tail){
            lst.tail->next = p;
            lst.tail = p;
        } else {
            p->next = tmp->next;
            tmp->next = p;
        }
    }
}
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

void move_k_node(List &lst, int k){
    if (k == 0) return;
    if (lst.head == nullptr || lst.head == nullptr) return;
    Node* p = lst.head;
    Node* q = lst.tail;
    q->next = p;
    for (int i = 1; i < k; i++) {
        p = p->next;
    }
    lst.head = p->next;
    p->next = nullptr;
    lst.tail = p;
}

int main(){
    cin.tie(0);
    List L;
    Init(L);
    int key;
    do{
        cin >> key;
        if (key == 0){
            int x;
            cin >> x;
            add_front(L, x);
        }
        if (key == 1){
            int x;
            cin >> x;
            add_back(L, x);
        }
        if (key == 2){
            int vt_value , x;
            cin >> vt_value >> x;
            add_after(L, vt_value, x);
        }
        if (key == 3){
            int k;
            cin >> k;
            move_k_node(L, k);
        }
    } while (key != 4);
    print_list(L);
    return 0;
}
