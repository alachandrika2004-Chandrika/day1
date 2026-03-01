/*Name: A.Chandrika
  Date: 01/03/26
  Description: to find the leap year
  sample input: 2024
  sample output: it is a leap year*/

#include <stdio.h>
int main()
{
    //declaring variable for the year
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    //checking whether the year is leap or not using ternary operator
    ((year%400==0)||(year%4==0 && year %100!=0))?printf("It is a leap year\n"):printf("It is not a leap year\n");
    return 0;
}