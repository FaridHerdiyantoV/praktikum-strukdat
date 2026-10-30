#include "Doublylist.h"
#include <iostream>

void CreateList(List &L){
    L.First = Nil;
    L.Last = Nil;
}

address alokasi(infotype x){
    address P = new ElmList;
    if(P != Nil){
        P->info = x;
        P->next = Nil;
        P->prev = Nil;
    }
    return P;
}

void dealokasi(address &P){
    if(P != Nil){
        delete P;
        P = Nil;
    }
}

void printInfo(List L){
    address P = L.First;
    if (P == Nil) {
        cout << "List Kosong!" << endl;
    }else{
        cout << "Isi List:" << endl;
        while(P != Nil){
            cout << "No. Polisi: " << P->info.nopol << endl;
            cout << "Warna kendaraan: " << P->info.warna << endl;
            cout << "Tahun pembuatan: " << P->info.thnBuat << endl;
            P = P->next;
        } 
    }
}

void insertLast(List &L, address P){
    if (L.First == Nil) {
        L.First = P;
        L.Last = P;
    }else{
        P->prev = L.Last;
        L.Last->next = P;
        L.Last = P;
    }
}

address findElm(List L, infotype x){
    address P = L.First;
    while (P != Nil) {
        if (P->info.nopol == x.nopol){
            return P;
        }
        P = P->next;
    }
    return Nil;
}

void deleteFirst(List &L, address &P) {
    P = L.First;
    
    L.First = P->next;
    
    if (L.First != Nil) {
        L.First->prev = Nil; 
    } else {
        L.Last = Nil; 
    }
    
    P->next = Nil;
    P->prev = Nil;
}

void deleteLast(List &L, address &P) {
    P = L.Last;
    L.Last = P->prev;
    
    if (L.Last != Nil) {
        L.Last->next = Nil;
    } else {
        L.First = Nil; 
    }
    
    P->prev = Nil;
    P->next = Nil;
}

void deleteAfter(List &L, address Prec, address &P) {
    P = Prec->next;
    
    if (P != Nil) {
        Prec->next = P->next;
        if (P->next != Nil) {
            (P->next)->prev = Prec;
        } else {
            L.Last = Prec;
        }
        P->next = Nil;
        P->prev = Nil;
    }
}

