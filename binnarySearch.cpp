#include<cstdio>

int main(){
    int N[10]={23,34,45,67,78,86,88,90,92,98};
    int BEG=0,END=9,MID,ITEM,LOC;
    scanf("%d",&ITEM);
    MID=(BEG+END)/2;
    while(BEG<=END && N[MID]!=ITEM){
        if(ITEM<N[MID]){
            END=MID -1;
        }
        else{
            BEG=MID+1;
        }
        MID=(BEG+END)/2;

    }
    if(N[MID]==ITEM){
       LOC=MID;
    }
    else{
    LOC=-1;
    }
    LOC=LOC+1;
    if(LOC>=1){
    printf("\nPossition is:%d\n",LOC);}
    else if(LOC==0){
        printf("Data not found!!!!");
    }


    return 0;
}
