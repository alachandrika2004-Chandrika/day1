/*Name: A.Chandrika
  Date: 01/03/26
  Description: check triangle validity
  a + b > c
  a + c > b
  b + c > a
| a | b | c | Expected |
|---|---|---|
| 0 | 5 | 7 | Invalid (side cannot be 0) |
| -3 | 4 | 5 | Invalid (negative side) |
| 0 | 0 | 0 | Invalid |
| 100000 | 100000 | 1 | Valid |
a + b == c --> Invalid */
#include <stdio.h>
int main()
{
    //declaring the variables
    int a, b , c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a + b == c) ||(b + c == a)|| (c + a == b))
    {
        printf("Invalid it is a straight line\n");
        return 1;
    }
    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid triangle side cannot be negative\n");
    }
    if( (a + b > c) || (a + c > b) || (b + c > a))
    {
        printf("It is a valid triangle\n");
    }
    else
    {
        printf("It is not a valid triangle\n");
    }

    return 0;
}