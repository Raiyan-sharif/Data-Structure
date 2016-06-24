#include<cstdio>
#include<string>
#include<cstring>

#define T 32
using namespace std;

class stack{

private:
    char arr[T];
    int Lenght;

public:

    stack() : Lenght(0)
     {}
    int getLength() {return Lenght;}
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
         char top_value() {
            if(Lenght>0) {

                return arr[Lenght-1];
            }
         }

};

void intopost(char in[]) {
    stack s;
    char post[100];
    int el = 0;
    for(int i = 0; i < strlen(in); ++i) {

        if(in[i] == '(') {

            s.push(in[i]);
        }
        else if(in[i] == ')') {

            while(s.top_value() != '(') {
               post[el++] = s.pop();
            }
            s.pop();
        }
        else if(in[i] >= '0' && in[i] <= '9') {

            post[el++] = in[i];
        }
        else if(in[i] == '+' ||in[i] == '-' ||in[i] == '*' ||in[i] == '/' ) {

            while(s.top_value() != '(' && s.getLength() != 0) {
                if((s.top_value() == '*' || s.top_value() == '/') && (in[i] == '+' || in[i] == '-')) {
                    post[el++] = s.pop();
                }
                else {
                    break;
                }
            }
            s.push(in[i]);
        }
    }
    post[el] = 0;
    printf("%s\n", post);

}

int main(){

    char in[] = "(1+3*(5/8))";
    //printf("%s\n", intopost(in));
    intopost(in);
    return 0;
}


