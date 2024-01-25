#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test;
    scanf("%d",&test);

    for(int j = 0; j < test; j++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int findNum;
        int isExist = 1;
        scanf("%d",&findNum);
        for(int i = 0; i < n; i++)
        {
            if(findNum == arr[i])
            {
                isExist = 1;
                break;
            }
            else{
                isExist = 0;
            }
        }
         if(isExist == 1)
            {
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
    }

    return 0;
}

