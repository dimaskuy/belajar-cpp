#ifndef STACK_H
#define STACK_H

const int MAXSTACK = 10;

typedef int infotype;

struct stack {
    infotype info[MAXSTACK];
    int top;
};

void createStack_108072500027(stack &S);
bool isEmpty_108072500027(stack S);
bool isFull_108072500027(stack S);
void push_108072500027(stack &S, infotype x);
infotype pop_108072500027(stack &S);
int sumStack_108072500027(stack S);

#endif
