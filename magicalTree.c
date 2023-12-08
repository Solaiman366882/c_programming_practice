#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int l = 6;
    if(n > 1)
    {
        l = l + n/2;
    }
    int  k =1,s=l-1,sk=n;
    for(int i =0; i < l; i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    for(int i =0; i < 5; i++)
    {
        for(int j=0; j <5; j++)
        {
            printf(" ");
        }
        for(int j =0; j < sk; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
