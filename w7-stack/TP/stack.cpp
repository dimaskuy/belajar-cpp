#include "stack.h"
#include <iostream>
using namespace std;

void createStack_108072500034(stack &S) { S.top = 0; }
bool isEmpty_108072500034(stack S) { return S.top == 0; }
bool isFull_108072500034(stack S) { return S.top == MAXSTACK; }

void push_108072500034(stack &S, infotype x) {
    if (!isFull_108072500034(S)) {
        S.info[S.top] = x;
        S.top++;
    }
}

infotype pop_108072500034(stack &S) {
    if (!isEmpty_108072500034(S)) {
        S.top--;
        return S.info[S.top];
    }
    return -1;
}

int sumStack_108072500034(stack S) {
    int total = 0;
    infotype x;
    while (!isEmpty_108072500034(S)) {
        x = pop_108072500034(S);
        total += x;
    }
    return total;
}