/*Name : A.Chandrika
  Date: 01/03/26
  Description : even and odd checking
  sample input : 3
  sample output : even*/

#include <stdio.h>
int main()
{
    //declaring number
    int number;
    //read input from the user
    printf("Enter the number : ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }

    return 0;
}