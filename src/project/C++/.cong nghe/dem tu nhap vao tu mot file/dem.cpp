// Dem tu nhap vao tu ban
#include <iostream>
#include <fstream>
using namespace std;

string path = "nhap.txt";
char c, k = ' ';

int DemTu() {
    int dem = 0;
    ifstream file(path);
    while ((c = file.get()) != EOF) {
        if ((c != ' ' && c != '\n') && (k == ' ' || k == '\n')) dem++;
        k = c;
    }
    return dem;
}

int main() {
    cout << "So tu trong file: " << DemTu();
}