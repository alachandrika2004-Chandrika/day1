/*Name: A.Chandrika
  Date: 01/03/26
  Description: finding largest of 3 numbers
  sample input : 1 5 2
  sample output: 5*/

#include <stdio.h>
int main()
{
    //declaring variables for numbers
    int num1, num2, num3;
    printf("Enter num1, num2, num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //checking the largest using ternary operator
    printf("%d is the largest among three numbers\n", num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3));
    return 0;
}