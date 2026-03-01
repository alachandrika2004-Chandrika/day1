/*Name: A.Chandrika
  Date: 01/03/26
  Description: check number is amstrong number or not
  sample input: 1634
  sample output: amstrong number*/

#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    //first count how many digits are there in the number
    int original = number, count = 0, result;
    double sum=0;
    while(number)
    {
        count++;
        result = number % 10;
        number = number /10;
    }
    number = original;
    while(number)
    {
        
        result = number % 10;
         int power = 1;

        for(int i = 0; i < count; i++)
           power *= result;

        sum += power;
        number = number /10;
    }
    
    if((int)sum==original)
    {
        printf("The number is a Amstrong number\n");
    }
    else
    {
        printf("The number is not a Amstrong number\n");
    }
    
}