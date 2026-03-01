/*Name: A.Chandrika
  Date: 01/03/26
  Description: count no of digits in a number
  sample input: 1234
  sample output: 4
*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int original = number;
    int result, count =0;
    while(number)
    {
        count++;
        result = number % 10;
        number= number/10;
    }
    number = original;
    printf("No.of digits in %d are %d\n",number,count);

    return 0;
}