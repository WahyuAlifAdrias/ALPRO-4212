#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    int hasil = pangkat(num1, num2);

    cout << "Hasil pangkat: " << hasil << endl;
    return 0;
}
