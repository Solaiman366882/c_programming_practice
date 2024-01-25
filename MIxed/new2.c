#include<stdio.h>
int main(){
    int i,n,sum;
    for(n=1;n<=20;n++){
        sum=0;
        printf("\n\n");
        for(i=1;i<=10;i++){
            sum = sum+n;
            printf("%d *%d = %d\n",n,i,sum);
        }
    }
    return 0;
}
