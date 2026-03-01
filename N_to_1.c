/*Name: A.Chandrika
  Date: 01/03/26
  Description: print N to 1 natural numbers
  sample input: 5
  sample output: 5 4 3 2 1
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i =n;i>0;i--)
    {
        printf("%d ",i);
    }
    printf("\n");
}