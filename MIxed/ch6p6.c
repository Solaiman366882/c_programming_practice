#include<stdio.h>

int main(){
    int ara[]= {10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for(i=0,j=9;i<10;i++,j--){
        ara2[j] = ara[i];
    }
    for(i=0;i<10;i++){
        printf("ara2 %d element is %d\n",i+1,ara2[i]);
    }
    return 0;
}
