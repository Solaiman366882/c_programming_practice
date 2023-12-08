#include<stdio.h>

int main(){
    printf("Enter a character:");
    char ch=getchar();
    if(ch>='a' && ch<='z'){
        printf("%c is lower case. \n",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is upper case. \n",ch);
    }
    else{
        printf("%c is not a letter",ch);
    }
    return 0;
}
