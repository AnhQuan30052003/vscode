/// Tính trung bình tổng các phần tử có trong danh sách
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

float TrungBinhTong() {
    float tong = 0;
    int dem = 0;
    Node* node = head;
    while (node != NULL) {
        tong += node->value;
        dem += 1;
        node = node->next;
    }
    return tong/dem;
}

int main() {
    system("cls");
    ThemCuoi(1);
    ThemCuoi(2);
    ThemCuoi(3);
    cout << TrungBinhTong();
}