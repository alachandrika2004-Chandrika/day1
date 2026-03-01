/*Name: A.Chandrika
  Date: 01/03/26
  Description: check whether the number is palindrome or not
  sample input: 121
  sample output: number is a palindrome*/

#include<stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d",&number);

    int original = number;
    int res=0, result;
    while(number)
    {
       result = number % 10;
       res = (res*10)+result;
       number = number/10;
    }

    if(res == original)
    {
        printf("The number is PALINDROME\n");
    }
    else
    {
        printf("The number is not a PALINDROME\n");
    }

    return 0;
}