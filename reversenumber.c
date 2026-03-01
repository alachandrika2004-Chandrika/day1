/*Name: A.Chandrika
  Date: 01/03/26
  Description: reverse the number
  sample input: 123
  sample output: 321*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    int res=0,result,original = number;
    while(number)
    {
        result = number %10;
        res= (res*10)+result;
        number = number/10;
    }
    number = original;
    printf("Reverse of %d was %d\n",number,res);

    return 0;
}