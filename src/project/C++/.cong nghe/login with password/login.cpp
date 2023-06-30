// Login with password
#include <iostream>
#include <windows.h>
using namespace std;

void LoadingTime(short time) {
    system("cls");
    while (time != -1) {
        cout << "Lock !" << endl;
        cout << "Open after " << time-- << "s";
        Sleep(1000);
        system("cls");
    }
}

int main() {
    system("cls");
    string password = "anhquan";
    string get_pass;
    short time = 0;

    while (get_pass != password) {
        if (time == 3) {
            LoadingTime(15);
        }
        if (time == 6) {
            LoadingTime(60);
        }
        if (time == 9) {
            LoadingTime(60*5);
        }
        if (time == 12) {
            LoadingTime(60*30);
            cout << "If you enter it wrong again, the device will be locked forever !" << endl;
        }
        if (time == 13) {
            cout << "Locked !";
            break;
        }
        cout << "Password: ";
        getline(cin, get_pass);
        time += 1;
    }
}