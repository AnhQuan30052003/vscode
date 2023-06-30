// Nhap vao mot duon, sau do chinh sua lai doan do sao cho dep mat nhat co the
/*
vidu: nguyen    anh    quan -> Nguyen Anh Quan
*/
#include <iostream>
#include <cstring>
using namespace std;

char data[256];
char hoan_chinh[256];

void xu_ly_cach() {
    char s[256];
    strcpy(s, data);
    int first = 0, last = strlen(s)-1;

    // Thuc dau dong
    int i = 0;
    while (s[i++] == ' ' && i < strlen(s)) first++;

    // Thuc cuoi dong
    int j = strlen(s)-1;
    while (s[j--] == ' ' && j >= 0) last--;

    // Xoa di cach thua o dau va cuoi dong
    for (int i = first, k = 0; i <= last; k++, i++)
        if (s[i] != ' ' || s[i+1] != ' ') hoan_chinh[k] = s[i];
        else k--;

    // Tien hanh chinh sau
    if (hoan_chinh[0] >= 97 && hoan_chinh[0] <= 122) hoan_chinh[0] -= 32;
    for (int i = 1; i < strlen(hoan_chinh); i++)
        if (hoan_chinh[i] != ' ' && hoan_chinh[i-1] == ' ') {
            if (hoan_chinh[i] >= 97 && hoan_chinh[i] <= 122) hoan_chinh[i] -= 32;
        }
        else if (hoan_chinh[i] >= 65 && hoan_chinh[i] <= 90) hoan_chinh[i] += 32;
}

// Chuong trinh chinh
int main() {
    cout << "Nhap doan: ";
    cin.getline(data, 256);
    xu_ly_cach();
    cout << "Sau khi chinh sua: " << hoan_chinh;
}