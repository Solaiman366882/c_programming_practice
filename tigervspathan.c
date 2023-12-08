#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int testCase;
    scanf("%d",&testCase);
    for(int i =0; i < testCase; i++)
    {
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",&str);
        int tigerCount = 0, pathanCount = 0;
        for(int j =0; j <= n; j++)
        {
            if(str[j] == 'T')
            {
                tigerCount++;
            }
            else if(str[j] == 'P')
            {
                pathanCount++;
            }
        }
        if(tigerCount > pathanCount)
        {
            printf("Tiger\n");
        }
        else if(pathanCount > tigerCount)
        {
            printf("Pathaan\n");
        }
        else if(tigerCount == pathanCount)
        {
            printf("Draw\n");
        }
    }
    return 0;
}
