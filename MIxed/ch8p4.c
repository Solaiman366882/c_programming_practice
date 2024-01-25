#include<stdio.h>
int binary_sor(int ara[],int low,int high,int num)
{
    int mid;
    while(low<=high)
    {
        mid = (low +high)/2;
        if(num == ara[mid])
        {
            break;
        }
        else if(num > ara[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }
    if(low > high)
    {
        return (num +1);
    }
    else
    {
        return mid;
    }
}
int main()
{
    int ara1[] = {10,20,30,40,50,60,70,80,90,100};
    int num =70;
    int low=0;
    int high =9;
    int find = binary_sor(ara1,low,high,num);
    printf("%d is found . it is the %d element."ara[find],find);
    return 0;
}
















