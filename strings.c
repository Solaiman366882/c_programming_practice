#include<stdio.h>
#include<string.h>

int main()
{
    char str1[11],str2[11];
    scanf("%s %s",&str1,&str2);
    int length1 = strlen(str1),length2 = strlen(str2);
    printf("%d %d\n",length1,length2);
    printf("%s%s\n",str1,str2);

    char str1First = str1[0],str2First = str2[0];
    str1[0] = str2First;
    str2[0] = str1First;
    printf("%s %s\n",str1,str2);

    return 0;
}
