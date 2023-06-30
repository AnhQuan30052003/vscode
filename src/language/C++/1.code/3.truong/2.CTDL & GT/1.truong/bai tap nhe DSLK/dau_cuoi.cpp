/// Chuyển phần tử đầu danh sách xuống thành cuối danh sách
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

void ChuyenDau_Cuoi() {
    Node* dau = head;
    head = dau->next;
    dau->next = NULL;

    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = dau;
}

int main() {
    system("cls");
    ThemCuoi(1);
    ThemCuoi(2);
    ThemCuoi(3);
    ChuyenDau_Cuoi();
    Duyet();
}