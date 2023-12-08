#include<stdio.h>

int main(){
    for(int a=1;a<=3;a++){
        for(int b=1;b<=3 && b!=a;b++){
            for(int c=1; c<=3 && c!=a && c!=b;c++){
                printf("%d, %d, %d",a,b,c);
            }
        }
    }
    return 0;
}
