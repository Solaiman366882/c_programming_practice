#include<stdio.h>
int main()
{
    char str[] = "Bangla", str2[] = "desh", str3[12];
    int i, j, length1 = 6, length2 = 4, totalLength = length1 + length2;
    for(i=0,j=0;i < totalLength; j++,i++)
    {
        if(i < length1)
        {
            str3[i] = str[j];
        }
        if(i>=length1 && i< length2+length1){
            str3[i] = str2[j-length1];
        }
    }
    printf("%s\n",str3);
    return 0;
}
