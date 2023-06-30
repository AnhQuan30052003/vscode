#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int value;
    Node *left, *right;
};

using Tree = Node*;
Tree root = NULL;

Node* TaoNut(int x) {
    Node* node = new Node;
    node->value = x;
    node->left = node->right = NULL;
    return node;
}

void DuyetLRN(Tree t) {
    if (t == NULL) return;
    DuyetLRN(t->left);
    DuyetLRN(t->right);
    cout << t->value << ' ';
}

void Xay(Tree& t, int x) {
    if (t == NULL) {
        t = TaoNut(x);
        return;
    }
    if (t->value > x) Xay(t->left, x);
    else Xay(t->right, x);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Xay(root, a[i]);
    }
    DuyetLRN(root);
}