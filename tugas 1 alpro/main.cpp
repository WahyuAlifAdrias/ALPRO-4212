#include <iostream>

using namespace std;

int penjumlahan(int a, int z){
    return a+z;
}
int pengurangan(int a, int z){
    return a-z;
}
int totalnilaiarr(int arr[], int n){
    int total = 0;
    for (int i=1; i<=n; i++){
        total += arr[i];
    }
    return total;
}
float ratanilaiarr(int arr[], int n){
    int total = totalnilaiarr(arr, n);
    float rata = (float)total/n;
    return rata;
}

int main()
{
    int angka1, angka2;

    cout << " Masukan Angka Pertama : ";
    cin >> angka1;

    cout << " Masukan Angka Kedua : ";
    cin >> angka2;

    int hasilpenjumlahan = penjumlahan(angka1, angka2);
    int hasilpengurangan = pengurangan(angka1, angka2);

    cout << " Hasil Penjumlahan  : "<<hasilpenjumlahan<<endl;
    cout << " Hasil Pengurangan  : "<<hasilpengurangan<<endl;

    int n;
    cout << " --Array-- "<<endl;
    cout << " Input Jumlah Element Array : ";
    cin >> n;
    int arr[n];
        for(int i=1; i<=n; i++){
            cout << " Masukan Angka Ke-" <<i<< " : ";
            cin >> arr[i];
    }
    int total = totalnilaiarr(arr, n);
    cout << " 3.Jumlah Total : "<<total<<endl;
    float rata = ratanilaiarr(arr, n);
        cout << " 4.Rata - Rata : "<<rata<<endl;

    return 0;
}
