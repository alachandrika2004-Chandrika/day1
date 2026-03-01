/*Name: A.Chandrika
  Date: 01/03/26
  Description: find the roots of the quadratic equation
  sample input: a= 1, b = -3, c=2
  sample output: root1 = 1, root2 = 2 */

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if(a == 0)
    {
       printf("it is not a quadratic equation\n");
       return 0;
    }
    float D = b*b-(4*a*c);
    if(D > 0)
    {
       
        float root1= ((-b) + (sqrt(D)))/(2*a);
        float root2= ((-b) - (sqrt(D)))/(2*a);
    
        printf("Root1: %g\n", root1);
        printf("Root2: %g\n", root2);
    }
    else if(D == 0)
    {
        float root = -b / (2*a);
        printf("Equal Roots: %g\n", root);
    }
    else
    {
        printf("Complex roots\n");
    }
    return 0;
}