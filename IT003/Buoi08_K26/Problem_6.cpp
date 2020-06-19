/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
struct
classs
delete
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

//Quick sort
List merge(List l1, List l2) {
    Node* p = l2.head;
    Node* tmp = nullptr;
    while (p != nullptr){
        add_tail(l1, p->val);
        tmp = p;
        p = p->next;
        free(tmp);
    }
    return l1;
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
		if (l.head->val > x) MoveNode(l, l1);
		else if (l.head->val == x) MoveNode(l, l2);
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
	float pivot = l.tail->val;
	partition(l, pivot, l1, l2, l3);
	quickSort(l1);
	quickSort(l3);
	join(l, l3);
	join(l, l2);
	join(l, l1);
}

//Merge sort

List merge_2_sorted_lists(List a, List b){
	if (a.head == nullptr) return b;
	else if (b.head == nullptr) return a;
	if (a.head->val <= b.head->val){
		Node *i = a.head;
		Node *j = b.head;
		Node*temp;
		for (i; i != nullptr; i = i->next){
			if (i->next == nullptr && b.head != nullptr){
				i->next = b.head;
				a.tail = b.tail;
				break;
			}
			if (b.head == nullptr)
                break;
			else{
				if (b.head->val < i->next->val){
					temp = b.head;
					b.head = b.head->next;
					temp->next = nullptr;
					temp->next = i->next;
					i->next = temp;
				}
			}
		}
		return a;
	} else
        return merge_2_sorted_lists(b, a);
}
void SplitList(List source, List &first, List &second){
	Node *fast;
	Node *slow;
	slow = source.head;
	fast = source.head->next;
	while (fast != nullptr){
		if (fast->next == nullptr) break;
		fast = fast->next;
		if (fast != nullptr){
			slow = slow->next;
			fast = fast->next;
		}
	}
	first.head = source.head;
	first.tail = slow;
	second.head = slow->next;
	second.tail = fast;
	first.tail->next = nullptr;
}

Node *SortedMerge(Node *l1, Node* l2){
	Node *res = nullptr;
	if (l1 == nullptr)
		return l2;
	else if (l2 == nullptr)
		return l1;
	if (l1->val <= l2->val)
	{
		res = l1;
		res->next = SortedMerge(l1->next, l2);
	}
	else
	{
		res = l2;
		res->next = SortedMerge(l1, l2->next);
	}
	return res;
}

void MergeSort(List &l){
	List a;
	List b;
	list_initializing(a);
	list_initializing(b);
	if (l.head == nullptr || l.head->next == nullptr)
		return;
	SplitList(l, a, b);
	MergeSort(a);
	MergeSort(b);
	l = merge_2_sorted_lists(a, b);
}


List merge_k_sorted_lists(List *Lists, int k) {
    List l;
    list_initializing(l);
    for (int i = 0; i < k; i++) {
        l = merge(l, Lists[i]);
    }
    MergeSort(l);
    return l;
}

int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int k ; cin >> k;
    List *lists = new List[k];

    for(int i = 0; i < k; i++){
        list_initializing(lists[i]);
        int x;
        do{
            cin >> x;
            if (x != 0) add_tail(lists[i], x);
            else break;
        } while(true);
    }

    List l = merge_k_sorted_lists(lists, k);

    xuat(l);

    return 0;
}
