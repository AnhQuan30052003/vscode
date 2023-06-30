#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *before, *next;
};

Node* Tao(int value) {
    Node* node = new Node;
    node->value = value;
    node->before = node->next = NULL;
    return node;
}

void ThemDau(Node* &head, Node* &tail, Node* node) {
    node->next = head;
    if (head != NULL) head->before = node;
    head = node;
    if (tail == NULL) tail = node;
}

void ThemCuoi(Node* &head, Node* &tail, Node* node) {
    node->before = tail;
    if (tail != NULL) tail->next = node;
    tail = node;
    if (head == NULL) head = node;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int n, m;
    cin >> n >> m;

    Node* a[n+1];
    for (int i = 1; i <= n; i++) {
        a[i] = Tao(i);
        ThemCuoi(head, tail, a[i]);
    }

    int k;
    for (int i = 1; i <= m; i++) {
        cin >> k;
        if (k != head->value) {
            if (k == tail->value) {
                tail = tail->before;
                tail->next = NULL;
                a[k]->before = NULL;
                a[k]->next = head;
                head->before = a[k];
                head = a[k];
            }
            else {
                Node* q = a[k]->before;
                Node* p = a[k]->next;
                q->next = p;
                p->before = q;
                a[k]->before = NULL;
                ThemDau(head, tail, a[k]);
            }
        }
        cout << tail->value << ' ';
    }
}