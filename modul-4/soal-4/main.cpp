#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

struct Buku {
    string judul;
    int tahun;
};

typedef struct elmlist *address;

struct elmlist {
    Buku info;
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

address alokasi(Buku b) {
    address P = new elmlist;
    P->info = b;
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

bool deleteLast(List &L) {
    if (isEmpty(L)) {
        return false;
    }

    if (L.first->next == nullptr) {
        address P = L.first;
        L.first = nullptr;
        delete P;
        return true;
    }

    address Q = L.first;

    while (Q->next->next != nullptr) {
        Q = Q->next;
    }

    address P = Q->next;
    Q->next = nullptr;
    delete P;

    return true;
}

bool isNumber(const string &s) {
    if (s.empty()) {
        return false;
    }

    for (char c : s) {
        if (!isdigit(static_cast<unsigned char>(c))) {
            return false;
        }
    }

    return true;
}

void printBuku(List L) {
    cout << "Daftar Buku:";

    if (!isEmpty(L)) {
        cout << " ";

        address Q = L.first;

        while (Q != nullptr) {
            cout << Q->info.judul << "(" << Q->info.tahun << ")";

            if (Q->next != nullptr) {
                cout << " ";
            }

            Q = Q->next;
        }
    }

    cout << endl;
}

int main() {
    vector<string> tokens;
    string token;

    while (cin >> token) {
        tokens.push_back(token);
    }

    if (tokens.empty()) {
        return 0;
    }

    List L;
    createList(L);

    int expected = -1;
    size_t idx = 0;

    if (isNumber(tokens[0])) {
        expected = stoi(tokens[0]);
        idx = 1;
    }

    if (expected == 0) {
        deleteLast(L);
        printBuku(L);
        return 0;
    }

    string judul = "";
    int count = 0;

    for (; idx < tokens.size(); idx++) {
        if (isNumber(tokens[idx])) {
            if (!judul.empty() && (expected == -1 || count < expected)) {
                Buku b;
                b.judul = judul;
                b.tahun = stoi(tokens[idx]);

                address P = alokasi(b);
                insertLast(L, P);

                count++;
                judul = "";

                if (expected != -1 && count == expected) {
                    break;
                }
            } else {
                if (!judul.empty()) {
                    judul += " ";
                }

                judul += tokens[idx];
            }
        } else {
            if (!judul.empty()) {
                judul += " ";
            }

            judul += tokens[idx];
        }
    }

    deleteLast(L);
    printBuku(L);

    return 0;
}