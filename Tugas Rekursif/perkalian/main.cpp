#include <iostream>
using namespace std;

int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    int hasil = perkalian(num1, num2);

    cout << "Hasil perkalian: " << hasil << endl;
    return 0;
}
