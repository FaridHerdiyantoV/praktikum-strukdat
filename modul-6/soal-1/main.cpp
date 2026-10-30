#include "Doublylist.h"

int main(){
    List L;
    CreateList(L);

    kendaraan k1 = {"D001", "Hitam", 1990};
    kendaraan k2 = {"D002", "Putih",2019};
    kendaraan k3 = {"D003", "Merah", 1997};

    address P1 = alokasi(k1);
    address P2 = alokasi(k2);
    address P3 = alokasi(k3);

    insertLast(L, P1);
    insertLast(L, P2);
    insertLast(L, P3);

    cout << "=== Output Awal === " << endl;
    printInfo(L);

    cout << "\n--- Mencari No. Polisi D001 ---" << endl;
    kendaraan cari = {"D001", "", 0};
    address hasilCari = findElm(L, cari);
    if(hasilCari != Nil){
        cout << "Hasil ditemukan: " << hasilCari->info.nopol << " - " << hasilCari->info.warna << endl;
    }else{
        cout << "Tidak ditemukan" << endl;
    }

    cout << "\n--- Menghapus Elemen (D003) ---" << endl;
    address P_hapus;
    deleteLast(L, P_hapus);
    dealokasi(P_hapus);

    printInfo(L);
    
    return 0;
}