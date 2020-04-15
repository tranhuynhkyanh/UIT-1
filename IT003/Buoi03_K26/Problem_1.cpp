/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;


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

bool check_node(List lst, int vt_value, Node* &q){
    q = lst.head;
    while (q != nullptr){
        if (q->val == vt_value) return true;
        q = q->next;
    }
    return false;

}

void add_after(List &lst, int vt_value, int x){
    Node* tmp;
    if (check_node(lst, vt_value, tmp) == true){
        if (tmp == lst.tail)
            add_back(lst, x);
        else {
            Node* p = create_node(x);
            p->next = tmp->next;
            tmp->next = p;
        }
    } else add_front(lst, x);
}

int main(){
	std::ios_base::sync_with_stdio(false);cin.tie(0);
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
    } while (key != 3);
    print_list(L);
    return 0;
}
