#include <iostream>
using namespace std;

int main(){
    float x, y;

    cout << "Masukkan bilangan pertama: ";
    cin >> x;

    cout << "Masukkan bilangan kedua: ";
    cin >> y;

    cout << "Hasil penjumlahan: " << x + y << endl;
    cout << "Hasil pengurangan: " << x - y << endl;
    cout << "Hasil perkalian: " << x * y << endl;
    cout << "Hasil pembagian: " << x / y << endl;
    
    return 0;
}