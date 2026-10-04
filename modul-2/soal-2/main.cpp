#include <iostream>
using namespace std;

int main(){
    int matrix[3][3];
    int sum = 0;

    // Input nilai matriks
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }

    // Hitung jumlah nilai diagonal pada matriks
    for (int i = 0; i < 3; i++){
        sum += matrix[i][i];
    }

    // Output
    cout << "Jumlah nilai diagonal yang ada pada matriks: " << sum << endl;

    return 0;
}