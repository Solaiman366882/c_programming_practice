#include<stdio.h>
//This Program is only for find Vowel and Consonant
int main()
{
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' ||letter=='u')
        printf("The letter is Vowel:");
    else
        printf("The Letter is consonant.");
    return 0;
}
