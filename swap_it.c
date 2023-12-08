#include<stdio.h>
void swapt_it(int * a, int * b)
{
    int temp = * a;
    //printf("%d",temp);
    *a = *b;
    *b = temp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swapt_it(&x,&y);
    printf("%d %d",x,y);
    return 0;

}
