/*Name: A.Chandrika
  Date: 01/03/26
  Description: print 1 to n natural numbers
  sample input: 5
  sample input: 1 2 3 4 5*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        printf("%d ",i);
    }
    printf("\n");

    return 0;
}