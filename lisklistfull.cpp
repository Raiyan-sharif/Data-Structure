#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
using namespace std;

struct node{
    int data;
    node *next;

}*Head= NULL;

void AddAtBeg(int value){
    node *temp;
    temp = new node();
    temp->data = value;
    temp->next = Head;
    Head = temp;
}

void AddAtEnd(int value){
    node *temp,*temp1;
    temp = Head;
    if(temp == NULL){
        temp = new node();
        temp->data = value;
        temp->next = NULL;
        Head = temp;
    }
    else{

        temp1 = new node;
        temp1->data = value;
        temp1->next = NULL;
        while(temp->next != NULL){
             temp = temp->next;
        }
        temp->next = temp1;
    }
}
void DisplayAll(){
    node *temp;
    temp = Head;
    if(temp==NULL){
        printf("List is empty");
    }
    else{
    while(temp!= NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    }
    printf("\n");

}
void DisplayMaxMin(){
    node *temp;
    int max,min;
    temp = Head;
    if(temp==NULL){
        printf("List is empty\n");
    }
    else{
        max = temp->data;
        min = temp->data;
        while(temp!=NULL){

            if(temp->data>max){
                max = temp->data;
            }
            else if(temp->data<min){
                min = temp->data;
            }
            temp = temp->next;
        }

    }
    printf("The maximum value is %d\n",max);
        printf("The minimum value is %d\n",min);

}
void SearchNode(int item){
     node *temp;
     temp = Head;
     int k=0,l=1;
     while(temp!= NULL){
        if(temp->data==item){
            k=1;
            break;

        }
        else {
                l++;

        }

        temp = temp->next;
     }
     if(k==1){
        printf("Data found at pos %d\n",l);
     }
     else{
        printf("Data not found\n");
     }


}
void DeleteNode(int pos){
     node *temp,*temp2;
     temp = Head;

     if(pos == 1){
        temp2 = temp;
        temp = temp->next;
        Head = temp;
        delete(temp2);

     }
     else{

     for(int i=1;i<pos-1;i++){
        temp = temp->next;
     }
     temp2 = temp->next;
     temp->next=temp->next->next;
     delete(temp2);
     }

}
void ReverseNode(){
    node *temp,*p,*p2;
    temp = Head;
    p=NULL;
    while(temp!=NULL){
        p2 = temp->next;
        temp->next = p;
        p = temp;
        temp=p2;
    }
    Head = p;
}
void ReverseNodeReecursive(node *p){

    if(p->next == NULL){
        Head = p;
        return;
    }
    ReverseNodeReecursive(p->next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;

}

int main(){
    AddAtBeg(20);
    AddAtBeg(10);
    AddAtEnd(30);
    AddAtEnd(40);
    AddAtEnd(50);
    AddAtEnd(60);
    AddAtEnd(70);
    AddAtEnd(80);
    AddAtEnd(90);
    AddAtEnd(100);
    AddAtEnd(110);
    AddAtEnd(120);
    AddAtEnd(130);
    DisplayAll();
    DisplayMaxMin();
    SearchNode(130);
    DeleteNode(2);
    DisplayAll();
    ReverseNode();
    DisplayAll();
    node *p;
    p = Head;
    ReverseNodeReecursive(p);
    DisplayAll();

}
