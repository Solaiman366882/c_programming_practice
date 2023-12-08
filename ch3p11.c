#include<stdio.h>

int main(){
    printf("Please enter an alphabet:");
    char ch = getchar();
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is vowel.\n",ch);
    }//when entered letter in uppercase
    else if(ch == 'A' || ch == 'B' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c is vowel.\n",ch);
    }
    else if(ch == 'y' || ch == 'Y'){
        printf("%c is semi-vowel. \n",ch);
    }
    else{
        printf("%c is consonant.\n",ch);
    }
    return 0;
}
