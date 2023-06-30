#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int value;
    Node *left, *right;
};

using Tree = Node*;
Tree root;

Node* TaoNut(int x) {
    Node* node = new Node();
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

void DiChuyen(int a[], int f, int e) {
    if (f > e) return;
    int m = (f+e)/2;
    Xay(root, a[m]);
    DiChuyen(a, m+1, e);
    DiChuyen(a, f, m-1);
}

int main() {
    int n;
    cin >> n;

    n = pow(2,n)-1;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i+1;
    }
    DiChuyen(a, 0, n-1);
    DuyetLRN(root);
}