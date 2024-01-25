#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    arr[n];
    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    int updateIndex,updateValue;
    scanf("%d %d",&updateIndex,&updateValue);

    //array updated
    arr[updateIndex] = updateValue;

    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
