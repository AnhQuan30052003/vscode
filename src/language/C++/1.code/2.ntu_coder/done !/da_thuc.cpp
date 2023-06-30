#include <iostream>
using namespace std;

struct Node {
    int hs, sm;
    Node* next;
};

Node* Tao(int hs, int sm) {
    Node* node = new Node();
    node->hs = hs;
    node->sm = sm;
    node->next = NULL;
    return node;
}

void ChenCuoi(Node* &head, int hs, int sm) {
    if (head == NULL) {
        head = Tao(hs, sm);
        return;
    }
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = Tao(hs, sm);
}

void In(int a, int b) {
    if (b == 0) {
        if (a < 0) cout << a;
        else cout << '+' << a;
    }
    else {
        if (a == 1) cout << "+x";
        else if (a == -1) cout << "-x";
        else if (a > 0) cout << '+' << a << 'x';
        else cout << a << 'x';
        if (b > 1) cout << '^' << b;
    }

}

void InHeThuc(Node* head) {
    int a, b;
    a = head->hs;
    b = head->sm;
    if (a == 0) return;

    if (b == 0) cout << a;
    else {
        if (a == 1) cout << 'x';
        else if (a == -1) cout << "-x";
        else cout << a << 'x';
        if (b > 1) cout << '^' << b;
    }

    head = head->next;
    while (head != NULL) {
        In(head->hs, head->sm);
        head = head->next;
    }
}

int main() {
    Node* head = NULL;
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0) break;
        ChenCuoi(head, a, b);
    }
    InHeThuc(head);    
}