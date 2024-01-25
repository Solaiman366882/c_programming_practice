#include<stdio.h>
int str_length(char srt[])
{
    int i;
    for(i=0; srt[i] != '\0'; i++);
    return i;

}
char c[] *concat(char str1[],char str2[])
{
    int i,j,
    length1 = str_length(str1),
    length2 = str_length(str2),
    totalLength = length1 + length2;
    char str3[] = "";
    for(i=0,j=0; i < totalLength; j++,i++)
    {
        if(i < length1)
        {
            str3[j] = str1[i];
        }
        if(i>=length1 && i<totalLength)
        {
            str3[j] = str2[i-length1];
        }
    }
    return str3;
}
int main()
{
    char str[] = "Bangla", str2[] = "desh", str3[12];

    printf("%s\n",concat(str,str2));
}
