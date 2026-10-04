#include <iostream>
using namespace std;


void swapMultiplyProcess(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;

    x = x * 10;
    y = y * 10;
}

int main(){
    int x, y;

    cin >> x >> y;
    swapMultiplyProcess(x, y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}