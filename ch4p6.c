#include<stdio.h>

int main(){
    int n=1,x;
    printf("How Much do you want to print:");
    scanf("%d",&x);
    while(n<=x){
        printf("%d\n",n++);
    }
    return 0;

}
