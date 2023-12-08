//This program is only for find grade mark of a student
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark:");
    scanf("%d",&mark);
    if(mark>100 && mark<0)
        printf("Enter a valid mark.");
    else if(mark>=80 && mark<100)
        printf("You got A+ GPA 5.00");
    else if(mark>=70 && mark<80)
        printf("You got A GPA 4.00");
    else if(mark>=60 && mark<70)
        printf("You got A- GPA 3.5");
    else if(mark>=50 && mark<60)
        printf("You got B GPA 3.00");
    else if(mark>=40 && mark<50)
        printf("You got C GPA 2.00");
    else if(mark>=33 && mark<40)
        printf("You Got D GPa 1.00");
    else
        printf("You are Failed.");
    return 0;
}
