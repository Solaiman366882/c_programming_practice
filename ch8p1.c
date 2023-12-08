#include<stdio.h>
int main()
{
    int ara[] = {1,4,6,9,8,11,14,15,20,25,33,83,87,97,99,100};
    int number=20;
    int high = 15;
    int low = 0;
    int mid;
     while(low <=high){
        mid = (low+high)/2;
        if(ara[mid] == number)
        {
            break;
        }
        else if(ara[mid] > number)
        {
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
     }
     if(low>high)
     {
         printf("%d is not in the array",number);
     }
     else{
        printf("%d is found in the array. it is the %d element of the array.\n",ara[mid],mid);
     }
     return 0;
}
