#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node {
    int val;
    struct node *left;
    struct node *right;
    node(int val);
};

node::node(int val)
{
    this->val = val;
    left = NULL;
    right = NULL;
}


vector<vector<int>> level_order_traversal(node *root)
{
    queue<node *> q;
    vector<int> levels;
    vector<vector<int>> ans;
    
    if (root == NULL)
	return ans;
    q.push(root);
    while (!q.empty()) {
	int size = q.size();
	for (int i = 0; i < size; ++i) {
	    node *curr_node = q.front();
	    q.pop();
	    if (curr_node->left != NULL)
		q.push(curr_node->left);
	    if (curr_node->right != NULL)
		q.push(curr_node->right);
	    levels.push_back(curr_node->val);
	}
	ans.push_back(levels);
	levels.clear();
    }
    return ans;
}

struct node *create_tree()
{
    struct node *root = NULL;
    int root_data;

    cout << "Enter the node value:" << endl;
    cin >> root_data;
    root = new struct node (root_data);
    if (root_data == -1)
	return NULL;
    root->left = create_tree();
    root->right = create_tree();
    return root;
}

void print_tree_detailed(struct node *root)
{
    if (root == NULL)
	return;
    cout << root->val << ": ";
    if (root->left != NULL)
	cout << "L: " << root->left->val << ", ";
    if (root->right != NULL)
	cout << "R: " << root->right->val << "";
    cout << "\n";
    print_tree_detailed(root->left);
    print_tree_detailed(root->right);
}

int main()
{
    struct node *root = NULL;

    cout << "Enter the node values use -1 for no left or right child" << endl;
    root = create_tree();
    cout << "\n";

    cout << "Tree representation:" << endl;
    print_tree_detailed(root);
    cout << "\n";

    cout << "Level order traversal of tree:" << endl;
    vector<vector<int>> levels = level_order_traversal(root);
    for (auto arr1D: levels) {
	for (auto ele: arr1D) {
	    cout << ele << " ";
	}
	cout << "\n";
    }
    cout << "\n";
    return 0;
}
