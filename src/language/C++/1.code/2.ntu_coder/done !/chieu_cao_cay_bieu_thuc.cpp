#include <iostream>
#include <stack>
using namespace std;

struct Node {
    char infor;
    Node* left, *right;
};

stack<Node*> a;

Node* TaoNut(char infor) {
    Node* node = new Node;
    node->infor = infor;
    node->left = node->right = NULL;
    return node;
}

int ChieuCao(Node* node) {
    if (node == NULL) return 0;
    int a = ChieuCao(node->left);
    int b = ChieuCao(node->right);
    return a > b ? a + 1: b + 1;
}

int main() {
    // Input
    string text;
    getline(cin, text);

    // Rut dau cach
    char s[1000];
    short k = 0;
    for (short i = 0; i < text.size(); i++) {
        if (text[i] != ' ') {
            s[k++] = text[i];
        }
    }

    // Xu ly
    for (short i = 0; i < k; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            a.push(TaoNut(s[i]));
        }
        else {
            Node* node = TaoNut(s[i]);
            node->right = a.top();
            a.pop();
            node->left = a.top();
            a.pop();
            a.push(node);
        }
    }
    cout << ChieuCao(a.top());
}