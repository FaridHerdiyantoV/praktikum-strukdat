#include "Singlylist.h"

int main(){
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    CreateList(L);

        P1 = alokasi(2);
        insertFirst(L, P1);
        P2 = alokasi(0);
        insertFirst(L, P2);
        P3 = alokasi(8);
        insertFirst(L, P3);
        P4 = alokasi(12);
        insertFirst(L, P4);
        P5 = alokasi(9);
        insertFirst(L, P5);

        printInfo(L);

        // Mencari nilai 8
        infotype target(8);
        address P8 = findElm(L, target);

        if (P8 != Nil){
            cout << target << " ditemukan dalam list" << endl;
        }else{
            cout << target << " tidak ditemukan dalam list" << endl;
        }

        // Memanggil fungsi totalInfo dan mencetak hasil perhitungannya
        cout << "Total info dari kelima elemen adalah " << totalInfo(L) << endl;

        return 0;
}