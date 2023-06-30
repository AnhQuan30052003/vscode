/// Kiẻme tra xem các phần tử trong danh sách có tăng dần hay không ?
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* head = NULL;

void ThemCuoi(int value) {
    Node* nut = new Node;
    nut->value = value;
    nut->next = NULL;

    if (head == NULL) {
        head = nut;
        return;
    }
    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = nut;
}

bool TangDan() {
    Node* q = head;
    Node* p = q->next;

    while (p != NULL) {
        if (q->value > p->value) return false;
        q = p;
        p = p->next;
    }
    return true;
}

int main() {
    system("cls");
    ThemCuoi(2);
    ThemCuoi(1);
    ThemCuoi(3);
    if (TangDan()) cout << "Danh sach tang dan";
    else cout << "Danh sach khong tang dan !";
}