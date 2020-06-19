/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;


//###INSERT CODE HERE -

struct node{
    long long data;
    node* left;
    node* right;
};

node* create_node(long long x){
    node* p = new node;
    p->data = x;
    p->left = nullptr;
    p->right = nullptr;
    return p;
}

void add_node(node*& root, long long x){
	if (root == nullptr)
        root = create_node(x);
	else if (root->data > x)
		add_node(root->left, x);
	else if (root->data < x)
		add_node(root->right, x);
}

node* find(node* root, long long x){
    if (root == nullptr) return nullptr;
    else if (root->data > x)
		find(root->left, x);
	else if (root->data < x)
		find(root->right, x);
    else return root;
}

int main(){
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    node *a = NULL;
    int x, ms;
    do {
        cin >> x;
        if (x == 0) break;
        cin >> ms;
        if (x == 1) add_node(a, ms);
        else if (x == 2) cout << ( find(a, ms) == NULL ? 0 : 1) << "\n";
    } while (x > 0);
}
