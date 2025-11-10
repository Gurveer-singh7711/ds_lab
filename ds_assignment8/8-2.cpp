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

class bst {
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

    node* search_rec(node* root, int val) {
        if(root == NULL || root->data == val) {
            return root;
        }
        if(val < root->data) {
            return search_rec(root->left, val);
        } 
        else {
            return search_rec(root->right, val);
        }
    }

    node* search_nonrec(node* root, int val) {
        while(root != NULL) {
            if(root->data == val) {
                return root;
            } 
            else if(val < root->data) {
                root = root->left;
            } 
            else {
                root = root->right;
            }
        }
        return NULL;
    }

    node* find_max(node* root) {
        if(root == NULL) {
            return NULL;
        }
        while(root->right != NULL) {
            root = root->right;
        }
        return root;
    }

    node* find_min(node* root) {
        if(root == NULL) {
            return NULL;
        }
        while(root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    node* inorder_successor(node* root, node* n) {
        if(n->right != NULL) {
            return find_min(n->right);
        }
        node* succ = NULL;
        while(root != NULL) {
            if(n->data < root->data) {
                succ = root;
                root = root->left;
            } 
            else if(n->data > root->data) {
                root = root->right;
            } 
            else {
                break;
            }
        }
        return succ;
    }

    node* inorder_predecessor(node* root, node* n) {
        if(n->left != NULL) {
            return find_max(n->left);
        }
        node* pred = NULL;
        while(root != NULL) {
            if(n->data > root->data) {
                pred = root;
                root = root->right;
            } 
            else if(n->data < root->data) {
                root = root->left;
            } 
            else {
                break;
            }
        }
        return pred;
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

    cout << "inorder: ";
    t.inorder(root);
    cout << "\n";

    int key = 40;

    node* r1 = t.search_rec(root, key);
    if(r1 != NULL) {
        cout << "found (rec): " << r1->data << "\n";
    } 
    else {
        cout << "not found\n";
    }

    node* r2 = t.search_nonrec(root, key);
    if(r2 != NULL) {
        cout << "found (nonrec): " << r2->data << "\n";
    } 
    else {
        cout << "not found\n";
    }

    node* mn = t.find_min(root);
    node* mx = t.find_max(root);

    if(mn != NULL) {
        cout << "min: " << mn->data << "\n";
    }
    if(mx != NULL) {
        cout << "max: " << mx->data << "\n";
    }

    node* suc = t.inorder_successor(root, r1);
    if(suc != NULL) {
        cout << "successor of " << r1->data << ": " << suc->data << "\n";
    } 
    else {
        cout << "no successor\n";
    }

    node* pre = t.inorder_predecessor(root, r1);
    if(pre != NULL) {
        cout << "predecessor of " << r1->data << ": " << pre->data << "\n";
    } 
    else {
        cout << "no predecessor\n";
    }

    return 0;
}
