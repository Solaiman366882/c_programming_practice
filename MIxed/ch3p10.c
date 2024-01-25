#include<stdio.h>

int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>=1 || num<=10){
        printf("yes \n");
    }
    else{
        printf("no \n");
    }
    return 0;
}
