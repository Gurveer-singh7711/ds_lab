#include <iostream>
#include <algorithm>
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

class bst {
public:
    node* insert(node* root, int val) {
        if(root == NULL) {
            return new node(val);
        }
        if(val < root->data) {
            root->left = insert(root->left, val);
        } 
        else if(val > root->data) {
            root->right = insert(root->right, val);
        } 
        else {
            cout << "duplicate not allowed: " << val << "\n";
        }
        return root;
    }

    node* find_min(node* root) {
        while(root != NULL && root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    node* delete_node(node* root, int val) {
        if(root == NULL) {
            return root;
        }
        if(val < root->data) {
            root->left = delete_node(root->left, val);
        } 
        else if(val > root->data) {
            root->right = delete_node(root->right, val);
        } 
        else {
            if(root->left == NULL) {
                node* temp = root->right;
                delete root;
                return temp;
            } 
            else if(root->right == NULL) {
                node* temp = root->left;
                delete root;
                return temp;
            } 
            else {
                node* temp = find_min(root->right);
                root->data = temp->data;
                root->right = delete_node(root->right, temp->data);
            }
        }
        return root;
    }

    int max_depth(node* root) {
        if(root == NULL) {
            return 0;
        }
        int left_depth = max_depth(root->left);
        int right_depth = max_depth(root->right);
        return max(left_depth, right_depth) + 1;
    }

    int min_depth(node* root) {
        if(root == NULL) {
            return 0;
        }
        if(root->left == NULL && root->right == NULL) {
            return 1;
        }
        if(root->left == NULL) {
            return min_depth(root->right) + 1;
        }
        if(root->right == NULL) {
            return min_depth(root->left) + 1;
        }
        return min(min_depth(root->left), min_depth(root->right)) + 1;
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
    bst t;
    node* root = NULL;

    root = t.insert(root, 50);
    t.insert(root, 30);
    t.insert(root, 70);
    t.insert(root, 20);
    t.insert(root, 40);
    t.insert(root, 60);
    t.insert(root, 80);

    cout << "inorder before deletion: ";
    t.inorder(root);
    cout << "\n";

    root = t.delete_node(root, 70);

    cout << "inorder after deletion: ";
    t.inorder(root);
    cout << "\n";

    cout << "max depth: " << t.max_depth(root) << "\n";
    cout << "min depth: " << t.min_depth(root) << "\n";

    return 0;
}
