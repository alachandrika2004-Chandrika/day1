/*Name: A.Chandrika
  Date: 01/03/26
  Description: simple calculator using switch
  sample input: 1 2  +
  sample output: 1+2 = 3*/

#include<stdio.h>
int main()
{
    //declaring the variables
    int num1, num2;
    //read the input from the user
    printf("Enter the num1, num2: ");
    scanf("%d %d", &num1, &num2);

    char ch;
    printf("Enter the operator: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '+':
          printf("%d + %d = %d\n",num1, num2, num1+num2 );
          break;
        case '-':
          printf("%d - %d = %d\n",num1, num2, num1-num2 );
          break;
        case '*':
          printf("%d * %d = %d\n",num1, num2, num1*num2 );
          break;
        case '/':
          printf("%d / %d = %d\n",num1, num2, num1/num2 );
          break;
        default:
          printf("Invalid operator\n");

    }

    return 0;
}