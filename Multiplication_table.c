/*Name: A.chandrika
  Date: 01/03/26
  Description: MUltiplication table
  sample input: 5
  sample output: 5 x 1 = 5
                 5 x 2 = 10
                 5 x 3 = 15
                 5 x 4 = 20
                 5 x 5 = 25
                 5 x 6 = 30
                 5 x 7 = 35
                 5 x 8 = 40
                 5 x 9 = 45
                 5 x 10= 50*/

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    for(int i =1; i<=10; i++)
    {
        printf("%d x %d = %d\n",number, i, number*i);
    }

    return 0;
}