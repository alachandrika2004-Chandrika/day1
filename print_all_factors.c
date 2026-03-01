/*Name: A.Chandrika
  Date: 01/03/26
  Description: print all the factors of a number
  sample input: 3
  sample output: 1 3*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
           printf("%d ",i);
        }
    }

    printf("\n");

    return 0;
}