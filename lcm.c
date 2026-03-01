/*Name: A.Chandrika
  Date: 01/03/26
  Description: to find the lcm of 2 number
  formula : LCM(a,b)=a*b/GCD(a,b)​*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d %d",&a, &b);

    int remainder = b, temp1=a,temp2=b;
    while(b!=0)
    {
       remainder = a%b;
       a = b;
       b = remainder;
    }
    remainder = a;
    a = temp1;
    b = temp2;
    int LCM = (a*b)/remainder;
    printf("LCM(%d,%d) is %d\n",a, b, LCM);

    return 0;
}