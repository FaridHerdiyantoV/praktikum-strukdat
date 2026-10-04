#include <iostream>
using namespace std;

void swapValue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swapPointer(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

void swapReference(int &px, int &py){
    int temp = px;
    px = py; 
    py = temp;
}

int main(){
    int a = 4, b = 6;

    cout << "Kondisi awal -> a: " << a << " b: " << b << endl;

    swapValue(a, b);
    cout << "Setelah swapValue -> a: " << a << " b: " << b << endl;
    
    swapPointer(&a, &b);
    cout << "Setelah swapPointer -> a: " << a << " b: " << b << endl;
    
    swapReference(a, b);
    cout << "Setelah swapReference -> a: " << a << " b: " << b << endl;

    return 0;
}