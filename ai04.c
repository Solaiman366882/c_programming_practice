#include<stdio.h>

int main(){
     char lower;
     printf("Enter a lower case character:");
     scanf("%c",&lower);
     printf("UpperCase Character is:%c",lower-32);
     return 0;
}
