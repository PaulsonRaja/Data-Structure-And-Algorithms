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

int max_depth_binary_tree(struct node *root)
{
    if (root == NULL)
	return 0;
    int left_height = max_depth_binary_tree(root->left);
    int right_height = max_depth_binary_tree(root->right);
    return 1 + max(left_height, right_height);
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

    int max_depth = max_depth_binary_tree(root);
    cout << "Result: " << max_depth << endl;
    cout << "\n";
    return 0;
}
