#include <iostream>
using namespace std;

// Hitung karakter berapa kali muncul
int countChar(char word[], char find){
    int total = 0;
    int i = 0;

    while (word[i] != '\0'){
        if (word[i] == find){
            total++;
        }
        i++;
    }
    return total;
}

int main(){
    // Deklarasi variabel
    char word[100];
    char find;

    // Input kata dan karakter yang akan dicari
    cin >> word;
    cin >> find;

    // Output
    int result = countChar(word, find);
    cout << "Karakter muncul: " << result << endl;

    return 0;
}