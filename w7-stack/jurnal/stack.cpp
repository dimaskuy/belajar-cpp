#include "stack.h"
#include <iostream>
using namespace std;

void createStack(stack &S) { S.top = 0; }

bool isEmpty(stack S) { return S.top == 0; }

bool isFull(stack S) { return S.top == MAXSTACK; }

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.top] = x;
        S.top++;
    }
}

infotype pop(stack &S) {
    if (!isEmpty(S)) {
        S.top--;
        return S.info[S.top];
    }
    return -1;
}

int sumEvenStack(stack S) {
    int count = 0;
    for (int i = 0; i < S.top; i++) {
        if (S.info[i] % 2 == 0) {
            count += S.info[i];
        }
    }
    return count;
}

void reverseStack(stack &S) {
    stack temp;
    createStack(temp);

    while (!isEmpty(S)) {
        push(temp, pop(S));
    }

    S = temp;
}

void printInfo(stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong!" << endl;
        return;
    }

    cout << "Top -> ";
    for (int i = S.top - 1; i >= 0; i--) {
        cout << S.info[i] << " -> ";
    }
    cout << "NIL" << endl;
}