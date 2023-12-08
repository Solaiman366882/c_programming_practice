#include<stdio.h>

int main(){
    int i=1,n=5,sum=0;
    for(;i<=10;){
        sum = sum+n;
        printf("%d * %d = %d\n",i,n,sum);
        i++;

    }
    return 0;
}

