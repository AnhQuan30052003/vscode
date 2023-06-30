#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* Tao(int value) {
    Node* n = new Node();
    n->value = value;
    n->next = NULL;
    return n;
}

void ChenDau(Node* &head, int value) {
    Node* node = Tao(value);
    node->next = head;
    head = node;
}

void Duyet(Node* head) {
    while (head != NULL) {
        cout << head->value << ' ';
        head = head->next;
    }
}

int main() {
    Node* head = NULL;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ChenDau(head, x);
    }
    Duyet(head);
}