#include <iostream>

using namespace std;

/*void minarr(int arr[],int n);
int ganjil(int x);

int main()
{
    int n;
    cout << "masukan panjang array : ";
    cin >> n;

    int x[n];
    for(int i=0; i<n; i++){
        cout << "masukan nilai array indeks ke-" << i << " :";
        cin >> x[i];
    }

    minarr(x,n);

    return 0;
}
int ganjil(int x){
    return (x%2==1);
}
void minarr(int arr[],int n){
    int temp = arr[0];
    int index=-1;
    for(int i=0;i<n;i++){
        if(!ganjil(arr[i]) && arr[i]<temp){
            temp=arr[i];
            index=i;
        }
    }
    if(index==-1){
    cout << "bilangan tidak ada" << endl;
    }else{
    cout << temp <<" adalah bilangan genap terkecil di index :" << index << endl;
    }
}*/

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        for (j = i - 1; j >= 0 && arr[j] < key; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 4,3,5,1,2,2,1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
