#include <iostream>
using namespace std;

// Khởi tạp dữ liệu NODE
struct Node {
    int value;
    Node* next;
};

// Tạo thêm một node
Node* Tao(int x) {
    Node* node = new Node;
    node->value = x;
    node->next = NULL;
    return node;
}

// Xuất một nhánh node
void Xuat(Node* node) {
    while (node != NULL) {
        cout << node->value << ' ';
        node = node->next;
    }
}

// Tìm kiếm một node có giá trị (value) = x cần tìm
Node* TimKiem(Node* head, int x) {
    while (head != NULL) {
        if (head->value == x) return head;
        head = head->next;
    }
    return NULL;
}

// Chèn vào đầu danh sách
void ChenDau(Node* &head, int x) {
    Node* node = Tao(x);
    node->next = head;
    head = node;
}

// Chèn cuối
void ChenCuoi(Node* &head, int x) {
    if (head == NULL) {
        head = Tao(x);
        return;
    }
    Node* node = head;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = Tao(x);
}

// Xòa phần tử đầu
void XoaDau(Node* &head) {
    // Node* node = head;
    // head = node->next;
    // delete node; // xóa bộ nhớ của nút node !

    head = head->next;
}

// Xóa cuối
void XoaCuoi(Node* &head) {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* node = head;
    while (node->next->next != NULL) {
        node = node->next;
    }
    delete node->next;
    node->next = NULL;
}

// Xóa toàn bộ nút
void XoaAll(Node* &head) {
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* node = head;
    while (node != NULL) {
        Node* tam = node;
        if (tam->next != NULL) {
            node = tam->next;
            delete tam;
        }
        else break;
    }
    delete node;
    node = NULL;
    head = node;
}

// Đếm số phần tử có trong danh sách
int Dem(Node* head) {
    int dem = 0;
    Node* node = head;
    while (node != NULL) {
        dem += 1;
        node = node->next;
    }
    return dem;
}

// Tổng các phần tử trong danh sách
int Tong(Node* head) {
    Node* node = head;
    int tong = 0;
    while (node != NULL) {
        tong += node->value;
        node = node->next;
    }
    return tong;
}

// Kiem tra phan tu co tang dan hay khong

void ChenTheoViTri(Node* &head, int vt, int x) {
    if (vt == 0) {
        ChenDau(head, x);
        return;
    }

    Node* p = Tao(x);
    Node* node = head;
    while (vt > 1) {
        node = node->next;
        vt -= 1;
    }
    p->next = node->next;
    node->next = p;
}


int main() {
    system("cls");
    Node* head = NULL;
    ChenCuoi(head, 1);
    ChenCuoi(head, 2);
    ChenCuoi(head, 3);
    XoaDau(head);
    Xuat(head);
}