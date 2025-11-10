#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *left, *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

class tree {
public:
    node* insert(node* root, int val) {
        if(root == NULL) {
            return new node(val);
        }
        if(val < root->data) {
            root->left = insert(root->left, val);
        } 
        else {
            root->right = insert(root->right, val);
        }
        return root;
    }

    bool is_bst_util(node* root, node* &prev) {
        if(root == NULL) {
            return true;
        }
        if(!is_bst_util(root->left, prev)) {
            return false;
        }
        if(prev != NULL && root->data <= prev->data) {
            return false;
        }
        prev = root;
        return is_bst_util(root->right, prev);
    }

    bool is_bst(node* root) {
        node* prev = NULL;
        return is_bst_util(root, prev);
    }

    void inorder(node* root) {
        if(root == NULL) {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
};

int main() {
    tree t;
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(12);
    root->right->right = new node(20);

    cout << "inorder traversal: ";
    t.inorder(root);
    cout << "\n";

    if(t.is_bst(root)) {
        cout << "tree is a bst\n";
    } 
    else {
        cout << "tree is not a bst\n";
    }

    return 0;
}
