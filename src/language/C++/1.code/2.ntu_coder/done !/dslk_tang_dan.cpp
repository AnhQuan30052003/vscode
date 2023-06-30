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

bool TangDan(Node* head) {
    Node* p1 = head;
    Node* p2 = p1->next;
    while (p2 != NULL) {
        if (p1->value > p2->value) return false;
        p1 = p2;
        p2 = p2->next;
    }
    return true;
}

int main() {
    Node* head = NULL;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ChenCuoi(head, x);
    }
    if (TangDan(head)) cout << "YES";
    else cout << "NO";
}