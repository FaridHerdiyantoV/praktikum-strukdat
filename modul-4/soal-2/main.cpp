#include <iostream>
using namespace std;

typedef int infotype;

typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L) {
    L.first = nullptr;
}

bool isEmpty(List L) {
    return L.first == nullptr;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = nullptr;
    return P;
}

void insertLast(List &L, address P) {
    if (isEmpty(L)) {
        L.first = P;
        return;
    }

    address Q = L.first;

    while (Q->next != nullptr) {
        Q = Q->next;
    }

    Q->next = P;
}

address search(List L, infotype target) {
    address Q = L.first;

    while (Q != nullptr && Q->info != target) {
        Q = Q->next;
    }

    return Q;
}

void insertAfter(List &L, address P, address Prec) {
    P->next = Prec->next;
    Prec->next = P;
}

void printList(List L) {
    address Q = L.first;

    while (Q != nullptr) {
        cout << Q->info;

        if (Q->next != nullptr) {
            cout << "-> ";
        }
        
        Q = Q->next;
    }
    cout << endl;
}

int main() {
    List L;
    createList(L);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        address P = alokasi(x);
        insertLast(L, P);
    }

    int target, newNumber;
    cin >> target;
    cin >> newNumber;

    address Prec = search(L, target);

    if (Prec != nullptr) {
        address P = alokasi(newNumber);
        insertAfter(L, P, Prec);
    }

    printList(L);

    return 0;
}