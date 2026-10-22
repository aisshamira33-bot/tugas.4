#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "==============================" << endl;
    cout << "     CEK GENAP ATAU GANJIL" << endl;
    cout << "==============================" << endl;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Bilangan " << angka << " adalah GENAP" << endl;
    }
    else {
        cout << "Bilangan " << angka << " adalah GANJIL" << endl;
    }

    cout << "==============================" << endl;

    system("pause");
    return 0;
}
