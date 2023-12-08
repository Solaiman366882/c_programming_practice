#include<stdio.h>
int main(){
    int n;
    int sum;
    printf("Please enter the value of n:");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        int num = i*i;
        sum +=num;
    }
    printf("%d",sum);

}
