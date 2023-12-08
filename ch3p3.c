#include<stdio.h>

int main(){
    int n;
    printf("Please Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("The number is positive.\n");
    }
    else if(n<0){
        printf("the number is negative.\n");
    }
    else{
        printf("the number is zero\n");
    }
    return 0;

}
