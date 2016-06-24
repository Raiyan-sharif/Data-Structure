#include<cstdio>
#define max_length 15
void push_fuction(int arr[],int *length,int l){

    if(*length>=max_length){
       printf("Your stack has been over flowed\n");

    }
    else{

    arr[*length] = l;
    printf("%d\n",arr[*length]);
    *length+=1;
    }
    return;

}
int pop_function(int arr[],int *length){
    if(*length<0){
        printf("Your stack has been underflowed\n");

    }
    else{
        *length-=1;
        return (arr[*length]);

    }


}
int main(){
   int array_1[max_length]={1,2,3,4,5,6,7,8,9,10,11,12};
   int l,x=12;


   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
   pop_function(array_1,&x);
}

