/*Name: A.Chandrika
  Date: 01/03/26
  Description: find the sum of digits of a number
  sample input: 123
  sample output: 6
*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    int temp = number;
    int result,sum=0;
    while(number)
    {
        result= number % 10;
        sum = sum+result;
        number = number /10;
    }

    number = temp;
    printf("Sum of the digits in %d was %d\n",number,sum);

    return 0;
}