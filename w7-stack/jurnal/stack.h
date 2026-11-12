#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

const int MAXSTACK = 10;
typedef int infotype;
struct stack {
    infotype info[MAXSTACK];
    int top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
infotype pop(stack &S);
int sumEvenStack(stack S);

void reverseStack(stack &S);
void printInfo(stack S);
#endif
