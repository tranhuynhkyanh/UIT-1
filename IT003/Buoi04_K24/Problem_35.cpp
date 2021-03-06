/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
cout
[]
template
###End banned keyword*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int _get_height(node *sr)
{
	if (!sr)
        return -1;
	return 1 + max(_get_height(sr->left), _get_height(sr->right));
}

void _display_subtree(node *q, vector<string> & output, int left, int top, int width)
{
	string str = to_string(q->data);

	int left_begin_shift = 1 - (str.length()-1)/2;
	for (size_t i = 0; i < str.length() && left + width/2 + i < output[top].length(); i++)
		output[top][left + width/2 + left_begin_shift + i] = str[i];

	int branch_off_set = (width+3)/pow(2, 3);
	int mid = left + width/2;
	int left_mid = left + (width/2 - 1)/2;
	int right_mid = left + width/2 + 2 + (width/2 - 1)/2;

	if (q->left)
	{
		int branch_position = mid - branch_off_set + 1;
		for (int pos = mid + left_begin_shift - 2; pos > branch_position; pos--)
			output[top][pos] = '_';
		output[top+1][branch_position] = '/';
		for (int pos = branch_position-1; pos > left_mid + 2; pos--)
			output[top+1][pos] = '_';
		_display_subtree(q->left, output, left, top+2, width/2 - 1);
	}

	if (q->right)
	{
		int branch_position = mid + branch_off_set + 1;
		for (int pos = mid + left_begin_shift + str.length() + 1; pos < branch_position; pos++)
			output[top][pos] = '_';
		output[top+1][branch_position] = '\\';
		for (int pos = branch_position+1; pos < right_mid; pos++)
			output[top+1][pos] = '_';
		_display_subtree(q->right, output, left + width/2 + 2, top+2, width/2 - 1);
	}
}


void _display_tree(node *root)
{
	if (!root)
        return;

	int height = _get_height(root);
	int width_display = 4*pow(2, height) - 3;
	int height_display = 2 * height + 1;

	vector<string> output(height_display);
	for (size_t i = 0; i < output.size(); i++)
		output[i] = string(width_display + 4, ' ');

	_display_subtree(root, output, 0, 0, width_display);

	for (int row = 0; row < height_display; row++)
		cout << output[row] << endl;
}

//###INSERT CODE HERE -

node* create_node(int x){
    node* p = new node;
    p->data = x;
    p->left = nullptr;
    p->right = nullptr;
    return p;
}

void _insert(node* &root, int x){
    if (!root){
        root = create_node(x);
    } else {
        if (x < root->data)
            _insert(root->left, x);
        else
            _insert(root->right, x);
    }
}

void _search(node* root, int value, node* &parent, node* &x, bool &found){
    if (!root){
        found = false;
        parent = x = nullptr;
    } else {
        if (root->data == value){
            found = true;
            x = root;
        } else {
            parent = root;
            if (value < root->data)
                _search(root->left, value, parent, x, found);
            else
                _search(root->right, value, parent, x, found);
        }
    }
}

int main()
{
    node *root;
    int i = 0, a[] = {11, 9, 13, 8, 10, 12, 14, 15, 17};

    root = NULL;

    while(i <= 8)
    {
        _insert(root, a[i]);
        i++;
    }

    _display_tree(root);

    bool found;
    node *parent, *x;

    parent = x = NULL;
    _search(root, 13, parent, x, found);
    // Tìm kiếm node có giá trị là 13
    // parent: parent node của node có giá trị là 13
    // x: node có giá trị là 13
    // found: true nếu tìm thấy, false nếu tìm không thấy
    cout << "Result of the first query:" << endl;
    if (found)
    {
        if (parent)
            cout << "Data of node which is parent of query node: " << parent->data << endl;
        _display_tree(x);
    }
    else
        cout << "Not found" << endl;


    parent = x = NULL;
    _search(root, 18, parent, x, found);
    // Tìm kiếm node có giá trị là 18
    // parent: parent node của node có giá trị là 18
    // x: node có giá trị là 18
    // found: true nếu tìm thấy, false nếu tìm không thấy
    cout << "Result of the second query:" << endl;
    if (found)
        _display_tree(x);
    else
        cout << "Not found" << endl;

    return 0;
}
