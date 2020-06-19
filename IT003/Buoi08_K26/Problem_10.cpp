#include <bits/stdc++.h>

using namespace std;

struct Node{
    long long data;
    int tanso;
    Node* left;
    Node* right;
};

Node* create_node(long long x){
    Node* p = new Node;
    p->data = x;
    p->tanso = 1;
    p->left = nullptr;
    p->right = nullptr;
    return p;
}

void insert_node(Node*& root, long long x){
	if (root == nullptr)
        root = create_node(x);
	else if (root->data > x)
		insert_node(root->left, x);
	else if (root->data < x)
		insert_node(root->right, x);
	else if (root->data == x)
		root->tanso++;
}

void print_result(Node* root){
    if (root == nullptr) return;
    print_result(root->right);
    cout << root->data << " " << root->tanso << "\n";
    print_result(root->left);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    Node* root = nullptr;
    long long x;
    do{
        cin >> x;
        if (x != 0) insert_node(root, x);
        else {
            print_result(root);
            exit;
        }
    } while (x != 0);
    return 0;
}
