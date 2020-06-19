/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
new
delete
###End banned keyword*/

#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

Node* create_node(int x){
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

void list_initializing(List &l){
	l.head = l.tail = nullptr;
}

void add_head(List &l, int x){
	Node *p = create_node(x);
	if (l.head == nullptr)
		l.head = l.tail = p;
	else {
		p->next = l.head;
		l.head = p;
	}
}

void add_tail(List &l, int x){
	Node *p = create_node(x);
	if (l.head == nullptr)
		l.head = l.tail = p;
	else{
		l.tail->next = p;
		l.tail = p;
	}
}

Node* find_node(List l, int a){
    Node *p = l.head;
    while (p != nullptr){
        if (p->value == a) return p;
        p = p -> next;
    }
    return nullptr;
}

void add_after_a(List& l, int a, int b){
    Node *pos = find_node(l, a);
    if (pos == nullptr) add_head(l, b);
    else if (pos == l.tail) add_tail(l, b);
    else {
        Node *p = create_node(b);
        p->next = pos->next;
        pos->next = p;
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
		if (l.head->value > x) MoveNode(l, l1);
		else if (l.head->value == x) MoveNode(l, l2);
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
	list_initializing(l1);
	list_initializing(l2);
	list_initializing(l3);
	float pivot = l.tail->value;
	partition(l, pivot, l1, l2, l3);
	quickSort(l1);
	quickSort(l3);
	join(l, l3);
	join(l, l2);
	join(l, l1);
}

void print_list(List l){
    Node *p = l.head;
    while (p != nullptr){
        cout << p->value << " ";
        p = p -> next;
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
	List l;
	list_initializing(l);
    int key, x, a;
    do {
        cin >> key;
        if (key == 3){
            print_list(l);
            quickSort(l);
            print_list(l);
            exit;
        }
        if (key == 0){
            cin >> x;
            add_head(l, x);
        }
        if (key == 1){
            cin >> x;
            add_tail(l, x);
        }
        if (key == 2){
            cin >> a >> x;
            add_after_a(l, a, x);
        }
    } while (key != 3);
    return 0;
}
