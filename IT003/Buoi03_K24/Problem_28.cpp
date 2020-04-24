/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
[]
template
###End banned keyword*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

void _addatbeg(node **q, int num)
{
    node *temp;
    temp = new node;
    temp->data = num;
    temp->link = *q;
    *q = temp;
}

//###INSERT CODE HERE -

struct node* SortedMerge(node* a, node* b){
	if (a == nullptr) return b;
	if (b == nullptr) return a;
	node* result = nullptr;
	if (a->data <= b->data){
		result = a;
		result->link = SortedMerge(a->link, b);
	} else {
		result = b;
		result->link = SortedMerge(a, b->link);
	}
	return result;
}

void FrontBackSplit(node* source, node** frontRef, node** backRef){
	if (source == nullptr || source->link == nullptr){
		*frontRef = source;
		*backRef = nullptr;
		return;
	}
	node* slow = source;
	node* fast = source->link;
	while (fast != nullptr){
		fast = fast->link;
		if (fast != nullptr){
			slow = slow->link;
			fast = fast->link;
		}
	}
	*frontRef = source;
	*backRef = slow->link;
	slow->link = nullptr;
}

void _merge_sort(node** head){
	if (*head == nullptr || (*head)->link == nullptr)
		return;
	node* a;
	node* b;
	FrontBackSplit(*head, &a, &b);
	_merge_sort(&a);
	_merge_sort(&b);
	*head = SortedMerge(a, b);
}


void _display(node *q)
{
    while(q != NULL)
    {
        cout << q->data << " ";
        q = q->link;
    }
    cout << endl;
}

int main()
{
    node *head, *tail;

    head = NULL;

    int n, temp_val;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_val;
        _addatbeg(&head, temp_val);
    }

    //_display(head);

    _merge_sort(&head);

    _display(head);

    return 0;
}
