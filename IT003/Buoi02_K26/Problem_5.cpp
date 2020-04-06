/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//###INSERT CODE HERE -

struct Province {
	int id;
    string name;
    int pop;
    float area;
};

struct node {
    Province value;
    node* next;
};

struct List{
    node* head;
    node* tail;
};

void Init(List &l){
    l.head = nullptr;
    l.tail = nullptr;
}

node* create_node(Province x){
    node* p = new node;
    p->value = x;
    p->next = nullptr;
    return p;
}

void add_tail(List &l, node *p){
    if (l.head == nullptr){
        l.head = p;
        l.tail = l.head;
    } else {
        l.tail->next = p;
        l.tail = p;
    }
}

void inputListProvinces(List &l){
    int n;
    node* p;
    Province x;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x.id;
        cin.ignore();
        getline(cin, x.name);
        cin >> x.pop;
        cin >> x.area;
        p = create_node(x);
        add_tail(l, p);
    }

}

void outputListProvinces(List l){
    node* p = l.head;
    while (p != nullptr){
        cout << p->value.id << "\t";
        cout << p->value.name << "\t";
        cout << p->value.pop << "\t";
        cout << p->value.area << "\t";
        cout << endl;
        p = p->next;
    }
}

void outputProvincesMore1MillionPop(List l){
    node* p = l.head;
    while (p != nullptr){
        if (p->value.pop > 1000){
            cout << p->value.id << "\t";
            cout << p->value.name << "\t";
            cout << p->value.pop << "\t";
            cout << p->value.area << "\t";
            cout << endl;
        }
        p = p->next;
    }
}

node* findProMaxArea(List l){
    node* p = l.head;
    node* _max = l.head;
    while (p != nullptr){
        if (p->value.area > _max->value.area){
            _max = p;
        }
        p = p->next;
    }
    return _max;
}


void outputProvince(node *p){
    cout << p->value.id << "\t";
    cout << p->value.name << "\t";
    cout << p->value.pop << "\t";
    cout << p->value.area << "\t";
    cout << endl;
}


int main()
{
    List L;
    Init(L);
    inputListProvinces(L);
    cout<<"List of provinces:"<<endl;
    cout<<"ID\t|Province\t|Population\t|Area"<<endl;
    outputListProvinces(L);

    cout<<"Provinces with a population of more than 1 million:"<<endl;
    outputProvincesMore1MillionPop(L);

    cout<<"The largest province:"<<endl;
    node *p = findProMaxArea(L);
    if(p) outputProvince(p);

    return 0;
}



