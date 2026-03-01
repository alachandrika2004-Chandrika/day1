/*Name: A.Chandrika
  Date: 01/03/26
  Description: find the factorial of a number
  sample input: 5
  sample output: 120
*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int fact=1;
    for(int i =1; i <= number; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d\n",number, fact);

    return 0;
    
}