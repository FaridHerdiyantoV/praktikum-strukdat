#include <iostream>
using namespace std;

int main(){
    int nilaiD[3] = {80, 85, 90};

    cout << "=== ARRAY 1 DIMENSI ===" << endl;

    cout << "Nilai pertama  : " << nilaiD[0] << endl;
    cout << "Nilai kedua    : " << nilaiD[1] << endl;
    cout << "Nilai ketiga   : " << nilaiD[2] << endl;

    int nilai2D[2][3] = {
        {
            80, 85, 90
        },
        {75, 88, 92}
    };

    cout << endl;
    cout << "=== ARRAY 2 DIMENSI ===" << endl;

    cout << "Baris 0, kolom 0 : " << nilai2D[0][0] << endl;
    cout << "Baris 0, kolom 1 : " << nilai2D[0][1] << endl;
    cout << "Baris 1, kolom 2 : " << nilai2D[1][2] << endl;


    int nilai3D[2][2][2] = {
        {
            {80, 85},
            {75, 90}
        },
        {
            {13, 19},
            {53, 41}
        }
    };

    cout << endl;
    cout << "=== ARRAY 3 DIMENSI ===" << endl;

    cout << "Data [0][0][0] : " << nilai3D[0][0][0] << endl; 
    cout << "Data [0][1][1] : " << nilai3D[0][1][1] << endl; 
    cout << "Data [1][0][0] : " << nilai3D[1][0][0] << endl; 
    cout << "Data [1][1][1] : " << nilai3D[1][1][1] << endl; 

}