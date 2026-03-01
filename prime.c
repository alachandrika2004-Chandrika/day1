/*Name: A.Chandrika
  Date: 01/03/26
  Description: find the number is prime or not
  sample input: 3
  sample output: prime number*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    
    int count =1;
    for(int i=2; i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count == 2)
    printf("Prime number\n");
    else
    printf("Not a Prime number\n");

    return 0;
}