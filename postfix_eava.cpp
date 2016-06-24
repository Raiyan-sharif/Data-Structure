#include<cstdio>
#include<string>
#include<cstring>

#define T 32
using namespace std;
class stack{
private:
    int arr[T];
    int Lenght;

public:
    stack() : Lenght(0) {}
    int pop(){
        if(Lenght==0){
            printf("Stack is Underflow\n");

        }
        else{

            Lenght--;
            return arr[Lenght];
        }

        }
    void push(int a){
        if(Lenght==T){
            printf("Stack overflowed\n");
        }
        else{
            arr[Lenght]= a;
            Lenght++;
        }
         }

};

int evalPostfix(char postfix[]) {
    stack s;

    for(int i=0;i<strlen(postfix);++i) {
        if(postfix[i] == '+') {
            int a = s.pop();

            int b = s.pop();


            s.push(b + a);
        }
        else if(postfix[i] == '-') {
int a = s.pop();

            int b = s.pop();


            s.push(b - a);
        }
        else if(postfix[i] == '*') {

int a = s.pop();

            int b = s.pop();

            s.push(b * a);
        }
        else if(postfix[i] == '/') {
int a = s.pop();
            int b = s.pop();

            s.push(b / a);
        }

        else if(postfix[i] >= '0' && postfix[i] <= '9') {

            s.push(postfix[i] - '0');
        }
    }
    return s.pop();
}

int main(){

    stack a;

    char c[] = "12+";
    printf("%d\n", evalPostfix(c));

    return 0;
}
