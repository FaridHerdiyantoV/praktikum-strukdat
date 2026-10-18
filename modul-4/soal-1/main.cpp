#include <iostream>
using namespace std;

typedef string infotype;

typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList(List &L){
    L.first = nullptr;
}

bool isEmpty(List L){
    return L.first == nullptr;
}

address alokasi(infotype x){
    address P = new elmlist;
    P->info = x;
    P->next = nullptr;
    return P;
}

void insertLast(List &L, address P){
    if(isEmpty(L)){
        L.first = P;
        return;
    }

    address Q = L.first;
    while (Q->next != nullptr){
        Q = Q->next;
    }

    Q->next = P;
}

bool deleteFirst(List &L, infotype &served){
    if(isEmpty(L)){
        return false;
    }

    address P = L.first;
    served = P->info;

    L.first = L.first->next;
    delete P;

    return true;
}

void printAntrean(List L){
    cout << "Antrean: ";

    if(isEmpty(L)){
        cout << "kosong";
    }else{
        address Q = L.first;
        while (Q != nullptr){
            cout << Q->info;
            if(Q->next != nullptr){
                cout << "-> ";
            }
            Q = Q->next;
        }
    }

    cout << endl;
}

int main(){
    List L;
    createList(L);

    int menu;

    while (cin >> menu){
        if(menu == 1){
            string nama;
            cin >> nama;

            address P = alokasi(nama);
            insertLast(L, P);
            printAntrean(L);
        }

        else if (menu == 2){
            string served;

            if (deleteFirst(L, served)){
                cout << "Melayani: " << served << endl;
                printAntrean(L);
            }else{
                cout << "Antrean kosong" << endl;
            }
        }
        
        else if (menu == 3){
            break;
        }
    }
    return 0;
}
