#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include <iostream>

const int maxCap=100;
char stackArr[maxCap];
int top=-1;

bool isEmptyStack(){
    return top==-1;
}

bool isFullStack(){
    return top==maxCap-1;
}

void pushStack(char value){
    if(isFullStack()==false){
        top++;
        stackArr[top]=value;
    }
}

char popStack(){
    if(isEmptyStack()==false){
        char value=stackArr[top];
        top--;
        return value;
    }
    return '\0';
}

#endif