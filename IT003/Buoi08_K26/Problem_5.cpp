/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
new
delete
###End banned keyword*/

#include <iostream>
using namespace std;

struct sv{
    int ms;
    float diem;
};

struct Node{
    sv value;
    Node* next;
};

Node* create_node(sv x){
    Node *p = new Node;
    p->value = x;
    p->next = NULL;

    return p;
}
//###INSERT CODE HERE -

struct List{
	Node *head;
	Node *tail;
};

void init(List &l){
	l.head = l.tail = nullptr;
}

void add_head(List &l, sv x){
	Node *p = create_node(x);
	if (l.head == nullptr)
        l.head = l.tail = p;
	else{
		p->next = l.head;
		l.head = p;
	}
}

void add_tail(List &l, sv x){
	Node *p = create_node(x);
	if (l.head == nullptr)
        l.head = l.tail = p;
	else {
		l.tail->next = p;
		l.tail = p;
	}
}

Node* find_node(List &l, int a){
    Node *p = l.head;
    while (p != nullptr){
        if (p->value.ms == a) return p;
        p = p->next;
    }
    return nullptr;
}

void add_after_a(List &l, int a, sv x){
    Node *pos = find_node(l, a);
	if (l.head == nullptr || pos == nullptr)
        add_head(l, x);
    else {
        if (pos == l.tail)
            add_tail(l, x);
        else{
            Node *p = create_node(x);
            p->next = pos->next;
            pos->next = p;
        }
    }
}

void MoveNode(List &l, List &l1){
	Node *temp = l.head;
	if (l.head == l.tail&&l1.head != nullptr){
		l.head = l.tail = nullptr;
		l1.tail->next = temp;
		l1.tail = l1.tail->next;
	}
	else if (l.head == nullptr)
        return;
	else if (l1.head == nullptr){
		l.head = l.head->next;
		temp->next = nullptr;
		l1.head = l1.tail = temp;
	} else {
		l.head = l.head->next;
		temp->next = nullptr;
		l1.tail->next = temp;
		l1.tail = l1.tail->next;
	}
}

void partition(List &l, float x, List &l1, List &l2, List &l3){
	while (l.head != nullptr){
		if (l.head->value.diem < x) MoveNode(l, l1);
		else if (l.head->value.diem == x) MoveNode(l, l2);
		else MoveNode(l, l3);
	}
}

void join(List &l, List l1){
	if (l1.head == nullptr) return;
	if (l.head == nullptr){
		l.head = l1.head;
		l.tail = l1.tail;
	} else {
		l.tail->next = l1.head;
		l.tail = l1.tail;
	}
}

void quickSort(List &l){
	if (l.head == l.tail || l.head == nullptr) return;
	List l1, l2, l3;
	init(l1);
	init(l2);
	init(l3);
	float pivot = l.tail->value.diem;
	partition(l, pivot, l1, l2, l3);
	quickSort(l1);
	quickSort(l3);
	join(l, l3);
	join(l, l2);
	join(l, l1);
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	List l;
	init(l);
	sv x;
	int type, a;
	do {
        cin >> type;
        if (type == 3){
            quickSort(l);
            Node* p = l.head;
            while (p != nullptr){
                cout << p->value.ms << " " << p->value.diem << endl;
                p = p->next;
            }
        }
        if (type == 0){
            cin >> x.ms >> x.diem;
            add_head(l, x);
        }
        if (type == 1){
            cin >> x.ms >> x.diem;
            add_tail(l, x);
        }
        if (type == 2){
            cin >> a;
            cin >> x.ms >> x.diem;
            add_after_a(l, a, x);
        }
	} while (type != 3);
    return 0;
}
