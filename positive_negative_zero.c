/*Name: A.Chandrika
  Date: 01/03/26
  Description: finding whether the number is positive, negative or zero
  sample input: 2
  sample output: positive*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number==0)
    printf("It is a Zero\n");
    else if (number>0)
    printf("It is a positive number\n");
    else
    printf("It is a negative number\n");

    return 0;
}