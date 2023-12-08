#include<stdio.h>

int main(){
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int i,j,temp;
    for(i=0,j=9;i<10;i++,j--){
        temp = ara[j];
        ara[j] = ara[i];

        }
        for(int n=0;n<10;n++){
            printf(" %d\n",ara[n]);


    }
    return 0;
}
