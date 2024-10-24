#include <iostream>
using namespace std;

int main() {
    char operasi;
    int a, b;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;

    switch (operasi) {
        case '+': cout << "Hasil: " << a + b << endl; break;
        case '-': cout << "Hasil: " << a - b << endl; break;
        case '*': cout << "Hasil: " << a * b << endl; break;
        case '/': cout << "Hasil: " << a / b << endl; break;
        default: cout << "Operator tidak valid\n";
    }
    return 0;
}
