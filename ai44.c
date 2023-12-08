//This program is only for find student pass or fail
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter Your mark:");
    scanf("%d",&mark);
    if(mark>=33 && mark<=100)
        printf("You are passed.");
    else if(mark>100)
        printf("Your mark is not correct.");
    else
        printf("Sorry You are fail.");
    return 0;
}
