#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int s = n-1;
    for(int i=1; i <= n; i++)
    {
        for(int j =1; j <= s; j++)
        {
            printf(" ");
        }

        for(int m = i; m >=1; m--)
        {
            printf("%d",m);
        }
        s--;
        printf("\n");
    }
    return 0;
}
