#include <iostream>
using namespace std;

int main() {
    int menu;
    cout << "Pilih menu:\n1. Nasi Goreng\n2. Mie Goreng\n3. Sate\n";
    cin >> menu;

    switch (menu) {
        case 1: cout << "Anda memilih Nasi Goreng\n"; break;
        case 2: cout << "Anda memilih Mie Goreng\n"; break;
        case 3: cout << "Anda memilih Sate\n"; break;
        default: cout << "Pilihan tidak valid\n";
    }
    return 0;
}
