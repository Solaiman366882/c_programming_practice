#include<stdio.h>

int main(){
    int n,x;
    printf("Enter the value of n:");
    scanf("%d",&n);
    x = n/2;
    if(x*2 == n){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;

}
