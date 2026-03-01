/*Name: A.Chandrika
  Date: 01/03/26
  Description: finding the greatest common divisior
Find GCD of 48 and 18
Step 1:
48 ÷ 18 → remainder = 12
Step 2:
18 ÷ 12 → remainder = 6
Step 3:
12 ÷ 6 → remainder = 0
👉 When remainder becomes 0, stop.
👉 Last divisor = 6
GCD(48,18)=6
  sample input: 48 18
  sample output: 6*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d",&a, &b);
    int temp = a,temp1=b;
    int remainder = b;
    while(b!=0)
    {
        remainder = a%b;
        a=b;
        b=remainder;
    }
    remainder = a;
    a = temp;
    b = temp1;
    printf("GCD(%d,%d) is %d\n", a,b, remainder);

    return 0;
}