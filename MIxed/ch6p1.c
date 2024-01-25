#include<stdio.h>

int main(){
    int ft_mark,st_mark,final_mark;
    double total_mark;
    printf("enter your first term mark:");
    scanf("%d",&ft_mark);
    printf("enter  your second term mark:");
    scanf("%d",&st_mark);
    printf("enter your final term mark:");
    scanf("%d",&final_mark);
    total_mark = (ft_mark/4.0) + (st_mark/4.0) + (final_mark/2.0);
    printf("your total mark is %d",total_mark);
    return 0;

}
