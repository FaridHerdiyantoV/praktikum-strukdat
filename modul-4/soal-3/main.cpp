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

int sumList(List L) {
    int total = 0;

    address Q = L.first;

    while (Q != nullptr) {
        total = total + Q->info;
        Q = Q->next;
    }

    return total;
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

    cout << sumList(L) << endl;

    return 0;
}