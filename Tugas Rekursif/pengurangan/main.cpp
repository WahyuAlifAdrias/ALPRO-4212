#include <iostream>
using namespace std;

int kurang(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return kurang(a - 1, b - 1);
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    int hasil = kurang(num1, num2);

    cout << "Hasil pengurangan: " << hasil << endl;
    return 0;
}
