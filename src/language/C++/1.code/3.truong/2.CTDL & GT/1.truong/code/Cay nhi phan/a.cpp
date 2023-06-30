#include <iostream>
using namespace std;

// Khai bao node
struct Node {
    int value;
    Node *left, *right;
};

// Dinh nghia cho de su dụng hon
using Tree = Node*;
// Khai bao mot goc cay chinh "root"
Tree root = NULL;

// Tao ra mot node cua cay
Node* Tao(int value) {
    Node* node = new Node;
    node->value = value;
    node->left = node->right = NULL;
    return node;
}

// Duyet cay theo: Node - left - right
void DuyetNLR(Tree t) {
    if (t == NULL) return;
    cout << t->value << ' ';
    DuyetNLR(t->left);
    DuyetNLR(t->right);
}

// Duyet cay theo: left - node - right
void DuyetLNR(Tree t) {
    if (t == NULL) return;
    DuyetLNR(t->left);
    cout << t->value << ' ';
    DuyetLNR(t->right);
}

// Duyet cay theoL left - right - node
void DuyetLRN(Tree t) {
    if (t == NULL) return;
    DuyetLRN(t->left);
    DuyetLRN(t->right);
    cout << t->value << ' ';
}

// Mang => Cay
void TaoCay(Tree& t, int arr[], int i, int n) {
    t = Tao(arr[i]);
    if (i*2+1 < n) TaoCay(t->left, arr, i*2+1, n);
    if (i*2+2 < n) TaoCay(t->right, arr, i*2+2, n);
}

// Cay => Mang
void ChuyenCayThanhMang(Tree t, int arr[], int i, int n) {
    arr[i] = t->value;
    if (t->left != NULL) ChuyenCayThanhMang(t->left, arr, 2*i+1, n);
    if (t->right != NULL) ChuyenCayThanhMang(t->right, arr, 2*i+2, n);
}

int main() {
    system("cls");
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    TaoCay(root, a, 0, n);
    DuyetNLR(root);
}