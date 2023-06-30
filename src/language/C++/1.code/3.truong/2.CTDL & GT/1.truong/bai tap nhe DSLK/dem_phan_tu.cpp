#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* head = NULL;

Node* TaoNut(int value) {
    Node* node = new Node;
    node->value = value;
    node->next = NULL;
    return node;
}

void ThemCuoi(int value) {
    if (head == NULL) {
        head = TaoNut(value);
        return;
    }
    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = TaoNut(value);
}

int DemPhanTu() {
    int dem = 0;
    Node* node = head;
    while (node != NULL) {
        dem += 1;
        node = node->next;
    }
    return dem;
}

int main() {
    system("cls");
    ThemCuoi(1);
    ThemCuoi(2);
    ThemCuoi(3);
    cout << DemPhanTu();
}