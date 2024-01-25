#include<stdio.h>

int main(){
    for(int n=1;n<=20;n++){
        printf("%d er ghorer namata \n",n);
        for(int i=1;i<=10;i++){
            printf("%d * %d = %d\n",n,i,n*i);
        }
    }
    return 0;

}
