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

void _display(node *q)
{
    int current_data = q->data;
    int current_data_freq = 0;
    while(q != nullptr)
    {
        if(q->data == current_data)
            current_data_freq++;
        else
        {
            cout << current_data << " : " << current_data_freq << endl;
            current_data = q->data;
            current_data_freq = 1;
        }

        q = q->link;
    }

    cout << current_data << " : " << current_data_freq << endl;
}

//###INSERT CODE HERE -

void add_to_head(node*& head, int num, int value){
    for (int i = 0; i < num; i++)
        _addatbeg(&head, value);
}

void sortList(node*& head){
    int _0 = 0, _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0, _7 = 0, _8 = 0 , _9 = 0 , _10 = 0;
    while (head != nullptr){
        switch(head->data){
            case 0: _0++; break;
            case 1: _1++; break;
            case 2: _2++; break;
            case 3: _3++; break;
            case 4: _4++; break;
            case 5: _5++; break;
            case 6: _6++; break;
            case 7: _7++; break;
            case 8: _8++; break;
            case 9: _9++; break;
            case 10: _10++; break;
        }
        node* tmp = head->link;
        delete head;
        head = tmp;
    }
    head = nullptr;
    add_to_head(head, _10, 10);
    add_to_head(head, _9, 9);
    add_to_head(head, _8, 8);
    add_to_head(head, _7, 7);
    add_to_head(head, _6, 6);
    add_to_head(head, _5, 5);
    add_to_head(head, _4, 4);
    add_to_head(head, _3, 3);
    add_to_head(head, _2, 2);
    add_to_head(head, _1, 1);
    add_to_head(head, _0, 0);
}

node* _sort(node *head){
    sortList(head);
    return head;
}

int main()
{
    node *head;

    head = nullptr;

    int n, temp_val;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_val;
        _addatbeg(&head, temp_val);
    }

    head = _sort(head);

    _display(head);

    return 0;
}
