
#include<cstdio>
int main(){
    int N[10]={23,44,12,34,45,56,33,44,88,77};
    int LOC=-1;
    int i,c;
    scanf("%d",&i);
    if(LOC==-1){
    N[9+1]=i;
    //printf("\n%d\n",i);
    LOC=0;

    }
    while(N[LOC]!=i){
       LOC=LOC+1;

    }
    if(LOC==10){
       LOC=-1;

    }
    LOC=LOC+1;
    if(LOC>=1){
    printf("\nPossition is:%d\n",LOC);}
    else if(LOC==0){
        printf("Data not found!!!!");
    }

}
