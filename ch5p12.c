#include<stdio.h>

int main(){
    int a,b,x,gcd;
    printf("enter the value of a & b:");
    scanf("%d %d",&a,&b);
    if(a<b){
        x = a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--){
        if(a%x == 0 && b%x == 0){
            printf("%d",x);
            printf(",");
        }
    }
    return 0;

}

