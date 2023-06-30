/// Nhập và hiển thị ra đa thức từ các số đã nhập
#include <iostream>
using namespace std;

// Khởi tạp dữ liệu NODE
struct Node {
    int hs, sm;
    Node* next;
};

// Tạo thêm một node
Node* Tao(int x, int y) {
    Node* node = new Node;
    node->hs = x;
    node->sm = y;
    node->next = NULL;
    return node;
}

void ChenCuoi(Node* &head, int x, int y) {
    if (head == NULL) {
        head = Tao(x, y);
        return;
    }
    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = Tao(x, y);
}

void In(int hs, int sm) {
    if (sm == 0) {
        cout <<  " + 1";
        return;
    }
    if (hs > 0) cout << " + " << hs;
    else cout << " - " << hs*-1;
    if (sm > 1) cout << '^' << sm;
}

void InDaThuc(Node* head) {
    Node* node = head;
    int x = node->hs, y = node->sm;
    if (y == 0) cout << 1;
    else if (y == 1) cout << x << 'x';
    else cout << x << "x^" << y;

    node = node->next;
    while (node != NULL) {
        x = node->hs;
        y = node->sm;
        In(x, y);
        node = node->next;
    }
}

int main() {
    system("cls");
    Node* head = NULL;
    int a, b;
    do {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        ChenCuoi(head, a, b);
    } while (!(a == 0 && b != 0));
    InDaThuc(head);
}