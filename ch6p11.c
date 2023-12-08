#include<stdio.h>

int main(){
    double ft_mark,st_mark,final_mark;
    double total_mark;
    printf("enter first term mark:");
    scanf("%lf",&ft_mark);
    printf("enter second term mark:");
    scanf("%lf",&st_mark);
    printf("enter final term mark:");
    scanf("%lf",&final_mark);
    total_mark = (ft_mark*25/100)+(st_mark*25/100)+(final_mark*50/100);
    printf("Your Total mark Is:%0.2lf",total_mark);
    return 0;


}
