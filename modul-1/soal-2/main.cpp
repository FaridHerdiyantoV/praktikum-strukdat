#include <iostream>
#include <string>
using namespace std;

int main(){
    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"
    };
    string belasan[] = {
        "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"
    };

    int number;
    cout << "Masukkan angka (0-100): ";
    cin >> number;

    if (number < 0 || number > 100) {
        cout << "Angka harus berkisar antara 0 sampai 100" << endl;
        return 1;
    }

    if (number == 100){
        cout << number << " : seratus" << endl;
    } else if(number < 10){
        cout << number << " : " << satuan[number] << endl;
    }else if (number < 20){
        cout << number << " : " << belasan[number - 10] << endl;
    }else{
        int puluh = number / 10;
        int sat = number % 10;
        string result = satuan[puluh] + " puluh";
        if (sat > 0){
            string sSat = satuan[sat];
            result += " " + sSat;
        }
        cout << number << " : " << result << endl;
    }
    return 0;
}