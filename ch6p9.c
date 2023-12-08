
#include<stdio.h>

int main(){
    int ara[10] = {10,20,20,20,50,50,50,50,90,90};
    int i,j,temp;
  /*  int ara2[10];
    for(i=0,j=0;i<10;i++,j++){
        ara2[j] = ara[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n",ara2[i]);
    }*/
    for(int total=0;total<=100;total++){
        temp = 0;
        for(i=0;i<10;i++){
            if(ara[i] == total){
                temp++;
            }
        }
        if(temp>0){
            printf("Marks: %d \t Count:%d\n",total,temp);
        }
    }
    return 0;

}
