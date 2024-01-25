#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n>0){
        printf("The is positive\n");
    }
    else if(n<0){
        printf("The Number is Negative\n");
    }
    else{
        printf("The number is zero\n");
    }
    return 0;


}
