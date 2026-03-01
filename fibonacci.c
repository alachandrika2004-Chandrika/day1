/*Name: A.Chandrika
  Date: 01.03.2026
  Description: fibonacci series
  sample input: 5
  sample output: 0 1 1 2 3*/

#include<stdio.h>
int main()
{
    int first = 0, second = 1, n;
    printf("Enter the n value: ");
    scanf("%d",&n);

    printf("%d %d ", first, second);
    int temp;
    for(int i=3; i<=n;i++)
   {
       temp = second;
       second = first + second;
       first = temp;
       printf("%d ", second);
   } 

   return 0;
}