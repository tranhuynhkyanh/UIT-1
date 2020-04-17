#include <bits/stdc++.h>

using namespace std;

struct Node{
    double val;
    Node* next;
};

struct List{
    Node* head;
    Node* tail;
};

void init(List &lst){
    lst.head = nullptr;
    lst.tail = nullptr;
}

Node* create_node(int x){
    Node* p = new Node;
    p->val = x;
    p->next = nullptr;
    return p;
}

int getSize(List lst){
    int dem = 0;
    Node* p = lst.head;
    while (p != nullptr){
        dem++;
        p = p->next;
    }
    return dem;
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

Node* check_node_pre(List lst, int vt_value){
    if (lst.head == nullptr)
        return nullptr;
    else{
        Node* p = lst.head;
        while (p != lst.tail){
            if (p->next->val == vt_value) return p;
            p = p->next;
        }
    }
    return nullptr;
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

void delete_node(List &lst, int vt_value){
    if (lst.head == nullptr)
        return;
    else if (lst.head->val == vt_value)
        delete_head(lst);
    else {
        Node* tmp = check_node_pre(lst, vt_value);
        if (tmp != nullptr){
            if (tmp == lst.tail)
                return;
            else if (tmp->next == lst.tail){
                delete lst.tail;
                tmp->next = nullptr;
                lst.tail = tmp;
            }
            else {
                Node* p = tmp->next;
                tmp->next = p->next;
                delete p;
            }
        }
    }
}

void delete_node_with_value(List &lst, int vt_value){
    if (lst.head == nullptr);
	else if (lst.head->val == vt_value)
		delete_head(lst);
	int so_phan_tu = 0;
	Node* i = lst.head;
	while (i != nullptr){
        if (i->val == vt_value) so_phan_tu++;
        i = i->next;
	}
	for (int i = 0; i < so_phan_tu; i++)
		delete_node(lst, vt_value);
}

void swap_y_to_pos(List &lst, int vitri, double value){
    Node* p = lst.head;
    for(int i=1; i <= vitri; i++){
        p = p->next;
    }
    p->val = value;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    List L;
    init(L);
    int n, vitri;
    double x, y;
    do{
        cin >> n;
        switch (n){
            case 0:
                cin >> x;
                add_back(L, x);
                break;
            case 1:
                cin >> x;
                if (getSize(L) > 0)
                    delete_node(L, x);
                break;
            case 2:
                cin >> x;
                if (getSize(L) > 0)
                    delete_node_with_value(L, x);
                break;
            case 3:
                int vitri;
                cin >> vitri >> y;
                if (vitri > -1 && vitri < getSize(L))
                    swap_y_to_pos(L, vitri, y);
                break;
        }
    } while (n != -1);
    if (getSize(L) == 0)
        cout << "[]";
    else {
        Node* p = L.head;
        cout << "[";
        for(int i = 0; i < getSize(L) - 1; i++){
            cout << p->val << ",";
            p = p->next;
        }
        cout << p->val << "]";
    }
    return 0;
}
