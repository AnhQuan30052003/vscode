// Luyen danh sach lien ket kep
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

void ThemDau(Node* &head, Node* &tail, int value) {
    Node* node = Tao(value);
    node->next = head;
    if (head != NULL) head->before = node;
    head = node;
    if (tail == NULL) tail = node;
}

void ThemCuoi(Node* &head, Node* &tail, int value) {
    Node* node = Tao(value);
    node->before = tail;
    if (tail != NULL) tail->next = node;
    tail = node;
    if (head == NULL) head = node;
}

void DuyetHead(Node* head) {
    while (head != NULL) {
        cout << head->value << ' ';
        head = head->next;
    }
    cout << endl;
}

void DuyetTail(Node* tail) {
    while (tail != NULL) {
        cout << tail->value << ' ';
        tail = tail->before;
    }
    cout << endl;
}

void XoaDau(Node* &head, Node* &tail) {
    Node* node = head;
    node->next->before = NULL;
    head = node->next;
    delete node;
}

void XoaCuoi(Node* &head, Node* &tail) {
    Node* node = tail;
    node->before->next = NULL;
    tail = node->before;
    delete node;
}

void XoaPhanTuK(Node* &head, Node* &tail, int k) {
    if (head->value == k) XoaDau(head, tail);
    else if (tail->value == k) XoaCuoi(head, tail);
    else {
        Node* p1 = head;
        Node* p2 = p1->next;
        while (p2 != NULL) {
            if (p2->value == k) {
                p1->next = p2->next;
                p2->next->before = p1;
                return;
            }
            p1 = p2;
            p2 = p2->next;
        }
    }
}

int main() {
    system("cls");
    Node *head, *tail;
    head = tail = NULL;

    ThemCuoi(head, tail, 1);
    ThemCuoi(head, tail, 2);
    ThemCuoi(head, tail, 3);
    ThemCuoi(head, tail, 4);
    ThemCuoi(head, tail, 5);
    XoaCuoi(head, tail);

    DuyetHead(head);
    DuyetTail(tail);
    cout << head->value << ' ' << tail->value;
}