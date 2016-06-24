#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
void PrintForward(node *Head){
    node *temp;
    temp = Head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void PrintReverse(node *Tail){
    node *temp;
    temp = Tail;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main(){

    node *Head,*Tail,*n;
    n = new node;
    n->data = 1;
    n->prev = NULL;
    Head = n;
    Tail = n;

    n = new node;
    n->data = 2;
    n->prev = Tail;
    Tail->next = n;
    Tail = n;

    n = new node;
    n->data = 3;
    n->prev = Tail;
    Tail->next = n;
    Tail = n;

    n = new node;
    n->data = 4;
    n->prev = Tail;
    Tail->next = n;
    Tail = n;

    n = new node;
    n->data = 5;
    n->prev = Tail;
    Tail->next = n;
    Tail = n;
    Tail->next= NULL;

    PrintForward(Head);
    PrintReverse(Tail);

    return 0;
}
