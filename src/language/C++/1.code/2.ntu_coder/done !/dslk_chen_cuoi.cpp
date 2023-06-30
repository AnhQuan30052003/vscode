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

void ChenCuoi(Node* &head, int value) {
    if (head == NULL) {
        head = Tao(value);
        return;
    }
    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = Tao(value);
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
        ChenCuoi(head, x);
    }
    Duyet(head);
}
