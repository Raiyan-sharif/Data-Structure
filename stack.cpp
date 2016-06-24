#include<iostream>
#define MAX 3
using namespace std;

class stack{
   private:
       int arr[MAX];
       int top;
   public:
       stack(){
           top=-1;
       }
       void push(int a){
          if(top== MAX-1){
              cout<<"stack full"<<endl;

          }
          else{
             top++;
             arr[top]=a;
             cout<<a<<" is a pushed\n";

          }
       }
       void pop(){
           if(top==-1){
               cout<<"stack is empty\n";
           }
           else{
               int data =arr[top];
               arr[top]=NULL;
               top--;
               cout<<data<<" is poped\n";
           }
       }

};
int main(){
    stack a;

    a.push(30);
    a.push(20);
    a.push(301);
    a.push(302);
    a.pop();
}
