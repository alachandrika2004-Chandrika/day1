/*
Name: A.Chandrika
Date: 01/03/2026
Description : to find the profit and loss
profit = SP - CP
loss   = CP - SP
sample input: cp = 100, sp = 50
sample output: loss = 50 
*/

#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cp and sp: ");
    scanf("%d %d", &cp, &sp);
    
    printf("Cost price : %d\n", cp);
    printf("selling price : %d\n", sp);

    int profit = sp - cp;
    int loss = cp- sp;
    if(cp<0 || sp<0)
    {
        printf("Invalid inputs\n");
        return 1;
    }
    if(cp>sp)
    {
        printf("loss = %d\n", loss);
    }
    if(cp<sp)
    {
        printf("Profit = %d\n", profit);
    }

    return 0;

}