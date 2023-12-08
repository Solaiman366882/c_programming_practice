#include<stdio.h>
int main()
{
    char str[] = "Bangla"; char str2 = "desh",str3[12];
    int i,j, length1 = 6, length2 = 4;
    for(i=0,j=0; i < length1; i++,j++)
    {
        str3[i] = str[i];
    }
    for(i=0,j=length1; i < length2; i++,j++)
    {
        str3[j] = str2[i];
    }

    printf("%s",str3);
    return 0;
}
