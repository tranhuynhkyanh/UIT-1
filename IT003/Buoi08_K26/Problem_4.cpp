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
    int value;
    Node* next;
};

struct List{
    Node *head, *tail;
    List(){
        head =NULL;
        tail = NULL;
    }
};

Node* create_node(int x){
    Node *p = new Node;
    p->value = x;
    p->next = NULL;

    return p;
}

//###INSERT CODE HERE -

void add_head(List &l,int x){
	Node *p = create_node(x);
	if (l.head == nullptr)
        l.head = l.tail = p;
	else{
		p->next = l.head;
		l.head = p;
	}
}

void add(List &l, int x){
	if (l.head != nullptr){
		if (x < l.head->value){
			add_head(l, x);
			return;
		}
        Node* p = l.head;
        while (p->next != nullptr && p->next->value <= x)
            p = p->next;
            Node* q = create_node(x);
            q->next = p->next;
            p->next = q;
            if (p == l.tail)
                l.tail = q;
	} else {
		add_head(l, x);
	}
}

void xuat(List &l, int n = -1){
    Node* p = l.head;
    if (n == -1) {
        while (p != nullptr){
			cout << p->value << " ";
			p = p->next;
		}
    } else {
        while (n > 0 && p != NULL){
			cout << p->value << " ";
			p = p->next;
			n--;
		}
    }
    cout << "\n";
}

int main()
{
        cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    List a;

    int x, b;
    do {
        cin >> x;
        switch (x){
        case 0:
            cin >> b;
            add(a, b);
            break;
        case 1:

            cin >> b;
            xuat(a, b);
            cout << endl;
            break;
        case 2:
            xuat(a);
            cout << endl;
        }
    } while (x != 3);
}

