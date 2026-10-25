#include "Singlylist.h"

void CreateList(List &L){
    L.first = Nil;
}

address alokasi(infotype x){
    address P = new ElmList;
    if (P != Nil){
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P){
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P){
    if (P != Nil){
        P->next = L.first;
        L.first = P;
    }
}

void printInfo(List L){
    address P = L.first;
    cout << "Isi List: ";
    while (P != Nil){
        cout << P->info;
        if (P->next != Nil) cout << " -> ";
        P = P->next;
    }
    cout << endl;
}

// Fungsi untuk mencari nilai
address findElm(List L, infotype x){
    address P = L.first;
    while (P != Nil && P->info != x) {
        P = P->next;
    }
    return P;
}

int totalInfo(List L){
    int total = 0;
    address P = L.first;

    while (P != Nil){
        total += P->info;
        P = P->next;
    }
    return total;
}