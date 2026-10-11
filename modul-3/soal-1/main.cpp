#include <iostream>

using namespace std;

struct Mahasiswa{
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas){
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
};

int main(){
    Mahasiswa dataMahasiswa[10];
    int jumlah;

    do {
        cout << "Masukkan jumlah mahasiswa (1-10): ";
        cin >> jumlah;
    } while (jumlah < 1 || jumlah > 10);

    for (int i = 0; i < jumlah; i++){
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "Nama: ";
        cin >> dataMahasiswa[i].nama;
        
        cout << "NIM: ";
        cin >> dataMahasiswa[i].nim;
        
        cout << "Nilai UTS: ";
        cin >> dataMahasiswa[i].uts;
        
        cout << "Nilai UAS: ";
        cin >> dataMahasiswa[i].uas;
        
        cout << "Nilai Tugas: ";
        cin >> dataMahasiswa[i].tugas;
        
        dataMahasiswa[i].nilaiAkhir = hitungNilaiAkhir(
            dataMahasiswa[i].uts,
            dataMahasiswa[i].uas,
            dataMahasiswa[i].tugas
        );
    }


    for (int i = 0; i < jumlah; i++){
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << dataMahasiswa[i].nama << endl;
        cout << "NIM: " << dataMahasiswa[i].nim << endl;
        cout << "Nilai UTS: " << dataMahasiswa[i].uts << endl;
        cout << "Nilai UAS: " << dataMahasiswa[i].uas << endl;
        cout << "Nilai Tugas: " << dataMahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << dataMahasiswa[i].nilaiAkhir << endl;
    }

    return 0;
}
