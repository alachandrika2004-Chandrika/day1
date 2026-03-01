/*Name: A.Chandrika'
  Date: 01/03/26
  Description: sum of n natural numbers
  sample input: 3
  sample output: 6*/

#include<stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter the number: ");
    scanf("%d",&number);

    for(int i =1; i<= number; i++)
    {
        sum= sum+i;
    }

    printf("Sum of %d natural numbers are %d\n",number,sum);

    return 0;
}