#include <iostream>
#include <queue>
using namespace std;

int main() {
    system("cls");
    queue<int> a;
    
    a.push(1);
    a.push(2);
    a.push(3);

    while (a.size() > 0) {
        cout << a.front() << ' ';
        a.pop();
    }
}