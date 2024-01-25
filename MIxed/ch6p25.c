#include<stdio.h>
int main()
{
    int ft_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62},
        st_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62},
        final_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62};
    int i,j,highest_mark=0,lowest_marks=100;
    double total_marks[40];
    for(i=0;i<40;i++)
    {
        total_marks[i] = ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    /*for(i=1;i<=100;i++)
    {
        for(j=0;j<=40;j++)
        {
            if(total_marks[j] == i)
            {
                highest_mark = total_marks[j];
            }
        }
    }*/
    for(j=0;j<=40;j++)
        {
            if(total_marks[j]>highest_mark)
            {
                highest_mark = total_marks[j];
            }
        }
    printf("Highest Mark :%d\n",highest_mark);
    total_marks[38] = 80;
    total_marks[39] = 90;
    for(i=0;i<40;i++)
    {
        printf("%0.0lf ,",total_marks[i]);
        if(lowest_marks>total_marks[i]){
                lowest_marks =total_marks[i];
            }
    }
    printf("\n Lowest_mark = %d",lowest_marks);

    return 0;
}

