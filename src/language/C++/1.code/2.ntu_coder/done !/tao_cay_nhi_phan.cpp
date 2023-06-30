#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *left, *right;
};

using Tree = Node*;
Tree root = NULL;

Node* Tao(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = node->right = NULL;
    return node;
}

void DuyetNLR(Tree t) {
    if (t == NULL) return;
    cout << t->value << ' ';
    DuyetNLR(t->left);
    DuyetNLR(t->right);
}

void TaoCay(Tree& t, int arr[], int i, int n) {
    t = Tao(arr[i]);
    if (i*2+1 < n) TaoCay(t->left, arr, i*2+1, n);
    if (i*2+2 < n) TaoCay(t->right, arr, i*2+2, n);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    TaoCay(root, a, 0, n);
    DuyetNLR(root);
}