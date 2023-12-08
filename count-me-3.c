#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int totalFarmer = m1+m2;
        int newD = (m1*d) / totalFarmer;
        printf("%d\n",d-newD);
    }
    return 0;
}

