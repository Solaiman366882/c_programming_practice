#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i = 0; i < n; i++)
 {
     scanf("%d",&arr[i]);
 }
 for(int i = 0; i < n; i++)
 {
     printf("%d ",arr[i]);
 }
 int sum ;
 scanf("%d",&sum);
  for(int i = 0; i < n; i++)
 {
     printf("%d ",arr[i]);
 }
 int flag = 0;
 for(int i = 0; i < n-1; i++)
 {
     for(int j = i-1; j < n; i++)
     {
         if((arr[i]+arr[j]) == sum)
         {
             flag = 1;
             printf("Ghoto na ki %d+%d = %d",arr[i],arr[j],arr[i]+arr[j]);
             break;
         }
     }
 }
 if(flag == 1)
 {
     printf("YES");
 }
 else
 {
     printf("NO");
 }
 return 0;
}
