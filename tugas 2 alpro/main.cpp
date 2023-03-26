#include <iostream>

using namespace std;

int Max(int a,int z);
int Min(int a,int z);
int MaxArr(int arr[]);
int MinArr(int arr[]);
bool isEven(int x);
bool isOdd(int x);
bool isFactor(int a,int z);
int Search(int x, int arr[]);
bool isFound(int x,int arr[]);
int sumEven(int arr[]);
int sumOdd(int arr[]);

int main()
{
    int x[7]={11,2,4,2,7,12,3};
    int a,z;
    cout << "Array x[7]=]={11,2,4,2,7,12,3}" << endl;



    cout << "Masukan bilangan ke-1 : ";
    cin >> a;
    cout << "Masukan bilangan ke-2 : ";
    cin >> z;
    cout << "Bilangan terbesar adalah : " << Max(a,z) << endl;


    cout << "Masukan bilangan ke-1 : ";
    cin >> a;
    cout << "Masukan bilangan ke-2 : ";
    cin >> z;
    cout << "Bilangan terkecil adalah : " << Min(a,z) << endl;



    cout << "Nilai terbesar dalam array x adalah : " << MaxArr(x) << endl;

    cout << "Nilai terbesar dalam array x adalah : " << MinArr(x) << endl;

    cout << "Masukan angka : ";
    cin >> a;
    if(isEven(a)==true){
        cout << a << " merupakan bilangan genap"<< endl;
    }else{
        cout << a << " bukan bilangan genap"<< endl;
    }


    cout << "Masukan angka : ";
    cin >> a;
    if(isOdd(a)==true){
        cout << a << " merupakan bilangan ganjil"<< endl;
    }else{
        cout << a << " bukan bilangan ganjil"<< endl;
    }


    cout << "Masukan angka : ";
    cin >> a;
    cout << "Masukan faktornya : ";
    cin >> z;
    if(isFactor(a,z)==true){
        cout << z << " merupakan faktor dari " << a << endl;
    }else{
        cout << z << " bukan faktor dari " << a << endl;
    }


    cout << "Masukan angka yang akan dicari di array x : ";
    cin >> a;
    if(Search(a,x)==0){
        cout << a << " tidak ada dalam array x" << endl;
    }else{
        cout << a << " ada dalam array x" << endl;
    }


    cout << "Masukan angka yang akan dicari di array x : ";
    cin >> a;
    if(isFound(a,x)==true){
        cout << "angka ditemukan pada array x" << endl;
    }else{
        cout << "angka tidak ditemukan pada array x" << endl;
    }



    cout << "Jumlah total bilangan genap pada array x adalah = " << sumEven(x) << endl;


    cout << "Jumlah total bilangan ganjil pada array x adalah = " <<  sumOdd(x) << endl;
    return 0;
}

int Max(int a,int z){
    int temp=0;
    if(a>z){
        temp=a;
    }else{
        temp=z;
    }
return temp;
}

int Min(int a,int z){
    int temp=0;
    if(a<z){
        temp=a;
    }else{
        temp=z;
    }
return temp;
}

int MaxArr(int arr[]){
    int temp=arr[0];
    for(int i=0;i<7;i++){
        temp = Max(temp,arr[i]);
    }
return temp;
}

int MinArr(int arr[]){
    int temp=arr[0];
    for(int i=0;i<7;i++){
        temp = Min(temp,arr[i]);
    }
return temp;
}

bool isEven(int x){
    if(x%2==0){
        return true;
    }else{
        return false;
    }
}

bool isOdd(int x){
    if(x%2==1){
        return true;
    }else{
        return false;
    }
}

bool isFactor(int a,int z){
    if(a%z==0){
        return true;
    }else{
        return false;
    }
}
//8. Deskripsi fungsi Search
int Search(int x, int arr[]){
    int temp=0;
    for(int i=0;i<7;i++){
        if(x==arr[i]){
            temp=arr[i];
        }
    }
return temp;
}

bool isFound(int x,int arr[]){
    for(int i=0;i<7;i++){
        if(x==arr[i]){
            return true;
        }
    }
return false;
}

int sumEven(int arr[]){
    int sum=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
return sum;
}

int sumOdd(int arr[]){
    int sum=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==1){
            sum += arr[i];
        }
    }
return sum;
}


