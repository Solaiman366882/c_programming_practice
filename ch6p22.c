#include<stdio.h>
int main()
{
    int ft_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62},
        st_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62},
        final_marks[40] = {83,86,97,95,86,52,54,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62};
    int i,count,marks;
    double total_marks[40];
    for(i=0;i<40;i++)
    {
        total_marks[i] = ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(marks=0;marks<=100;marks++)
    {
        count=0;
        for(i=0;i<40;i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks:%d\t Count:%d\n",marks,count);
    }
    return 0;
}
