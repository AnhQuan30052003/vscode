/// Đảo các phẩn tù trong dach sách
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* head = NULL;

Node* Tao(int value) {
    Node* node = new Node;
    node->value = value;
    node->next = NULL;
    return node;
}

void ThemCuoi(int value) {
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

void Duyet() {
    Node* node = head;
    while (node != NULL) {
        cout << node->value << ' ';
        node = node->next;
    }
}

void ThemDau(Node* &node, int value) {
    Node* moi = Tao(value);
    moi->next = node;
    node = moi;
}

void DaoDanhSach() {
    Node* goc = head;
    Node* dao = NULL;
    while (goc != NULL) {
        ThemDau(dao, goc->value);
        goc = goc->next;
    }
    head = dao;
}

int main() {
    system("cls");
    ThemCuoi(1);
    ThemCuoi(2);
    ThemCuoi(3);
    DaoDanhSach();
    Duyet();
}