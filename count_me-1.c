#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int countOne = 0, countTwo = 0;
    for(int i = 0; i < n; i++)
    {
        if((arr[i] % 2 == 0) && (arr[i] % 3 == 0))
        {
            countOne++;
        }
        else if(arr[i] % 2 == 0)
        {
            countOne++;
        }
        else if(arr[i] % 3 == 0)
        {
            countTwo++;
        }
    }
    printf("%d %d",countOne,countTwo);
    return 0;
}
