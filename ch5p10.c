#include<stdio.h>

int main(){
    int n,sum=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2 != 0){
            sum  = sum + i;
        }
    }
    printf("the odd number summuatin is:%d",sum);
    return 0;

}
