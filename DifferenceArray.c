#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int j =0;  j < t; j++)
    {
        int n;
        scanf("%d",&n);
        int arr1[n],arr2[n],arr3[n];
        //take input for array 1
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr1[i]);
        }
        //copy array 1 in array 2
        for(int i =0; i < n; i++)
        {
            arr2[i] = arr1[i];
        }
        //sort array 2 in ascending order
        for(int i = 0; i < n-1; i++)
        {
            for(int j=i+1; j < n; j++ )
            {
                if(arr2[i] > arr2[j])
                {
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
        //make array 3 with deference between array 1 and array 2
        for(int i =0; i < n; i++)
        {
            arr3[i] = abs(arr1[i] - arr2[i]);
        }
        for(int i= 0; i < n; i++)
        {
            printf("%d ",arr3[i]);
        }
        printf("\n");
    }
    return 0;
}

