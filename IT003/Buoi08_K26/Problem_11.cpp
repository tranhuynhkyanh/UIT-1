/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
std
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

#define fast_io     ios_base::sync_with_stdio(false)

//###INSERT CODE HERE -

struct Node{
    char data[100];
    Node* left;
    Node* right;
};

char *strcpy(char *a, char *b){
	if (a == nullptr) return nullptr;
	while (*b != '\0'){
		*a = *b;
		a++;
		b++;
	}
	*a = '\0';
	return a;
}

Node* create_node(char x[]){
    Node* p = new Node;
    strcpy(p->data, x);
    p->left = nullptr;
    p->right = nullptr;
    return p;
}

int compare_char(char* x, char* y){
	while (*x){
		if (*x != *y) break;
		x++;
		y++;
	}
	return *x - *y;
}

void insert_node(Node*& root, char x[]){
	if (root == nullptr)
        root = create_node(x);
	else if (compare_char(root->data,x) > 0)
		insert_node(root->left, x);
	else if (compare_char(root->data,x) < 0)
		insert_node(root->right, x);
}

bool search_node(Node *root, char *x){
	if (root == nullptr) return false;
	int compare = compare_char(root->data, x);
	if (compare == 0) return true;
	else if (compare > 0)
        return search_node(root->left, x);
	else if (compare < 0)
        return search_node(root->right, x);
}

int main(){
    fast_io; cin.tie(0);
    char x[100];
    int type;
    Node* root = nullptr;
    do {
        cin >> type;
        cin.getline(x, 100);
        if (type == 1)
            insert_node(root, x);
        if (type == 2)
            cout << search_node(root, x) << "\n";
        if (type == 0) break;
    } while (type != 0);
    return 0;
}
