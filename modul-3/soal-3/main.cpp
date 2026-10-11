#include <iostream>
using namespace std;

void tampilArray2D(int arr[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

void tukarElemenArray2d(int arr1[3][3], int arr2[3][3], int baris, int kolom){
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arr2[3][3] = {
        {5, 4, 3},
        {6, 7, 8},
        {6, 6, 1}
    };

    int x = 5;
    int y = 10;

    int* p1 = &x;
    int* p2 = &y;

    int baris = 0;
    int kolom = 0;

    cout << "Array 1 (awal):" << endl;
    tampilArray2D(arr1);

    cout << "Array 2 (awal):" << endl;
    tampilArray2D(arr2);

    cout << "Nilai pointer awal: " << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    tukarElemenArray2d(arr1, arr2, baris, kolom);
    tukarPointer(p1, p2);

    cout << "\nSetelah penukaran pada baris " << baris << ", kolom " << kolom << ":" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray2D(arr1);

    cout << "\nArray 2:" << endl;
    tampilArray2D(arr2);

    cout << "\nNilai pointer setelah ditukar:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    return 0;
}
