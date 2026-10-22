#ifndef DLL_H
#define DLL_H
#include <iostream>

const int MAXSTACK = 10;
typedef int infotype;

typedef struct stack {
    infotype info[MAXSTACK];
    int top;
} stack;

void createStack_108072500034(stack &S);
bool isEmpty_108072500034(stack S);
bool isFull_108072500034(stack S);
void push_108072500034(stack &S, infotype x);
infotype pop_108072500034(stack &S);
int sumStack_108072500034(stack S);

#endif