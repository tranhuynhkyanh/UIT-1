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

node *_get_tail(node *q)
{
    while (q != NULL && q->link != NULL)
        q = q->link;
    return q;
}

void _addatbeg(node **q, int num)
{
    node *temp;
    temp = new node;
    temp->data = num;
    temp->link = *q;
    *q = temp;
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

//###INSERT CODE HERE -

node *getTail(node *cur){
    while (cur != nullptr && cur->link != nullptr)
        cur = cur->link;
    return cur;
}

node* partition(node *head,node *tail, node **newHead,node **newEnd) {
    node *pivot = tail;
    node *_prev = nullptr, *_cur = head, *_tail = pivot;
    while (_cur != pivot){
        if (_cur->data < pivot->data){
            if ((*newHead) == nullptr)
                (*newHead) = _cur;
            _prev = _cur;
            _cur = _cur->link;
        }
        else {
            if (_prev)
                _prev->link = _cur->link;
            node *tmp = _cur->link;
            _cur->link = nullptr;
            _tail->link = _cur;
            _tail = _cur;
            _cur = tmp;
        }
    }
    if ((*newHead) == nullptr)
        (*newHead) = pivot;
    (*newEnd) = _tail;
    return pivot;
}

node* _quick_sort(node *head, node*tail){
    if (!head || head == tail)
        return head;
    node *newHead = nullptr, *newEnd = nullptr;
    node *pivot = partition(head, tail, &newHead, &newEnd);
    if (newHead != pivot){
        node *tmp = newHead;
        while (tmp->link != pivot)
            tmp = tmp->link;
        tmp->link = nullptr;
        newHead = _quick_sort(newHead, tmp);
        tmp = getTail(newHead);
        tmp->link = pivot;
    }
    pivot->link = _quick_sort(pivot->link, newEnd);
    return newHead;
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

    tail = _get_tail(head);

    //_display(head);

    head = _quick_sort(head, tail);

    _display(head);

    return 0;
}
