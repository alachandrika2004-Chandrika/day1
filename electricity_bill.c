/*Name : A.Chandrika
  Date : 01/03/26
  Description : calculation of electricity bills
  Units Consumed	Rate per Unit
   0 – 100          	₹1.50
  101 – 200	            ₹2.50
  201 – 300	            ₹4.00
  Above 300	            ₹6.00*/


#include <stdio.h>
int main()
{
    int units, surcharge;
    printf("Enter units consumed : ");
    scanf("%d", &units);
    
    if(units >=0 && units <=100)
    {
        units = units * 1.50;
        surcharge = (20/100) * units;
        printf("Electricity Bill = Rs.%d/-\n", units + surcharge);
    }
    else if(units >=101 && units <=200)
    {
        units = units * 2.50;
        surcharge = (20/100) * units;
        printf("Electricity Bill = Rs.%d/-\n", units + surcharge);
    }
    else if(units >=201 && units <=300)
    {
        units = units * 4.00;
        surcharge = (20/100) * units;
        printf("Electricity Bill = Rs.%d/-\n", units + surcharge);
    }
    else 
    {
        units = units * 6.00;
        surcharge = (20/100) * units;
        printf("Electricity Bill = Rs.%d/-\n", units + surcharge);
    }

    return 0;
}