#include<stdio.h>
//This program is only for find a student grade
int main()
{
    float mark;
    printf("Enter Your mark:");
    scanf("%f",&mark);
    if(mark>=80)
        printf("A+");
    else if(mark>=70 && mark<80)
        printf("A");
    else if(mark>=60 && mark<70)
        printf("A-");
    else if(mark>=50 && mark<60)
        printf("B+");
    else if(mark>=33 && mark<50)
        printf("B");
    else
        printf("You are Fail.. sorry");
    return 0;

}
