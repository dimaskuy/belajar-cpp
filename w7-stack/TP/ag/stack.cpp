#include "stack.h"
void createStack_108072500027(stack &S) { S.top = 0; }
bool isEmpty_108072500027(stack S) { return S.top == 0; }
bool isFull_108072500027(stack S) { return S.top == MAXSTACK; }
void push_108072500027(stack &S, infotype x) {
    if (!isFull_108072500027(S)) {
        S.info[S.top] = x;
        S.top = S.top + 1;
    }
}

infotype pop_108072500027(stack &S) {
    if (!isEmpty_108072500027(S)) {
        S.top = S.top - 1;
        return S.info[S.top];
    }

    return 0;
}

int sumStack_108072500027(stack S) {
    int total = 0;

    while (!isEmpty_108072500027(S)) {
        total = total + pop_108072500027(S);
    }

    return total;
}
