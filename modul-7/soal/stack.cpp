#include <iostream>
#include "stack.h"

using namespace std;

void createStack(Stack &S){
    S.top = 0;
}

bool isEmpty(Stack S){
    return S.top == 0;
}

bool isFull(Stack S){
    return S.top == MAX_STACK - 1;
}

void push(Stack &S, int x){
    if (isFull(S)){
        cout << "Stack penuh, push "<< x <<" gagal\n";
        return;
    }
    S.top = S.top + 1;
    S.info[S.top] = x;
}

int pop(Stack &S){
    if (isEmpty(S)){
        cout << "Stack kosong, pop gagal\n";
        return -1;
    }
    int x = S.info[S.top];
    S.top = S.top - 1;
    return x;
}

void printInfo(Stack S){
    cout << "[TOP]";
    if (isEmpty(S)) {
        cout << " (kosong)";
    }else{
        for (int i = S.top; i >= 1; i--){
            cout << " " << S.info[i];
        }
    }
    cout << endl;
}

void balikStack(Stack &S){
    int i = 1;
    int j = S.top;
    while (i < j){
        int temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;
        i++;
        j--;
    }
}

// Latihan 2
void pushAscending(Stack &S, int x){
    Stack T;
    createStack(T);

    while (!isEmpty(S) && S.info[S.top] > x){
        push(T, pop(S));
    }

    push(S, x);

    while (!isEmpty(T)){
        push(S, pop(T));
    }
}

// Latihan 3
void getInputStream(Stack &S){
    char c;
    while(cin.get(c)){
        if (c == '\n'){
            break;
        }
        if (c >= '0' && c <= '9'){
            push(S, c - '0');
        }
    }
}