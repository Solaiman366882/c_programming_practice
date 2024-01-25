#include<stdio.h>
int binary_search(int ara[],int num,int high, int low){
    int mid;
    while(low <= high)
    {
        mid =(low +high)/2;
        if(ara[mid] == num)
            break;
        else if(ara[mid] < num)
            low = mid +1;
        else
            high = mid -1;
    }
    return low,high,mid;
}
int main()
{
    int ara[] = {1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low =0;
    int high = 15;
    int num = 22;
    int mid =0;
    binary_search(ara,num,high,low);
    if (low > high)
        printf("%d is not found in the array.",num);
    else
        printf("%d is found in the array. It is %d th element.",ara[mid],mid);
    return 0;


}
