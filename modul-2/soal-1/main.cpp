#include <iostream>
using namespace std;

int main(){
    
    int score[100];
    int total = 0;
    int avg;
    int upAvg = 0;

    int n;
    // Input panjang array
    cin >> n;

    // Input nilai mahasiswa
    for (int i = 0; i < n; i++){
        cin >> score[i];
        total += score[i];
    }

    // Hitung rata-rata
    avg = total / n;

    // Hitung jumlah mahasiswa dengan nilai di atas rata-rata
    for (int i = 0; i < n; i++){
        if (score[i] > avg){
            upAvg++;
        }
    }

    // Output
    cout << "Rata-rata: " << avg << endl;
    cout << "Di atas rata-rata: " << upAvg << endl;

    return 0;
}