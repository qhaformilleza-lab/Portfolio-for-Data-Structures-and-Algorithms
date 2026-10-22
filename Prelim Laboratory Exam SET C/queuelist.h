#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H

struct QNode{
    char data;
    QNode* next;
};

QNode* front=NULL;
QNode* rear=NULL;

bool isEmptyQueue(){
    return front==NULL;
}

void enqueue(char value){
    QNode* newNode=new QNode;
    newNode->data=value;
    newNode->next=NULL;

    if(rear==NULL){
        front=newNode;
        rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}

char dequeue(){
    if(isEmptyQueue()==false){
        QNode* temp=front;
        char value=temp->data;

        front=front->next;
        if(front==NULL)
            rear=NULL;

        delete temp;
        return value;
    }
    return '\0';
}

#endif