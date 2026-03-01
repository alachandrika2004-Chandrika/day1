/*Name: A.Chandrika
  Date: 01/03/26
  Description: check whether the number is divisible with 5 and 11
  sample input: 3
  sample output: divisible by 3*/

#include <stdio.h>
int main()
{
    //declaring a variables
    int number;

    //read number from the user
    printf("Enter the number: ");
    scanf("%d", &number);

    //checking number divisibility 3 and 5
    if((number % 3 == 0) && (number % 5 == 0))
    {
        printf("number is divisible by 3 and 5\n");
    }
    else if(number % 5 == 0)
    {
        printf("number is divisible by 5\n");
    }
    else if(number % 3 == 0)
    {
        printf("number is divisible by 3\n");
    }
    else
    {
        printf("number is not divisible by 3 or 5\n");
    }
    return 0;
}