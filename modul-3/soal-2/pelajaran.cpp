#include <iostream>
#include "pelajaran.h"

using namespace std;


pelajaran create_pelajaran(string namapel, string kodepel){
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel){
    std::cout << "Nama Mapel: " << pel.namaMapel << std::endl;
    std::cout << "Kode Mapel: " << pel.kodeMapel << std::endl;
}