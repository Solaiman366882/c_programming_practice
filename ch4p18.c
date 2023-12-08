#include <stdio.h>
int main(){
    for(int n=1;n<=20;n++){
        int sum = 0;
        printf("%d Er Ghorer Namata:\n\n",n);
        for(int i=1;i<=10;i++){
            sum += n;
            printf("%d * %d = %d\n",n,i,sum);
            if(i == 10){
                printf("\n");
            }
        }
    }
    return 0;

}
