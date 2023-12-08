#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int k = 0; k < t; k++)
    {
        char str[10001];
        scanf("%s",str);
        int length = strlen(str);
        int capitalCount = 0,lowerCount = 0, numberCount = 0;
        for(int i = 0; i < length; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                capitalCount++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                lowerCount++;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                numberCount++;
            }
        }
        printf("%d %d %d\n",capitalCount,lowerCount,numberCount);

    }

    return 0;
}


