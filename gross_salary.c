/*Name: A.Chandrika
  Date : 01/03/26
  Description : to find the gross salary
    If Basic ≤ 10,000
    HRA = 20%
    DA = 80%
    If Basic ≤ 20,000
    HRA = 25%
    DA = 90%
    If Basic > 20,000
    HRA = 30%
    DA = 95%
    Input: Enter Basic Salary: 8000
    Output: Gross Salary = 16000.00*/

#include<stdio.h>
int main()
{
    int basic_salary, HRA, DA;
    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    if(basic_salary <= 10000)
    {
        HRA= (20.0/100)*basic_salary;
        DA = (80.0/100)*basic_salary;
        basic_salary= basic_salary+ HRA + DA;
        printf("Gross Salary = %d.00\n",basic_salary);
    }
    else if(basic_salary <= 20000)
    {
        HRA= (25.0/100)*basic_salary;
        DA = (90.0/100)*basic_salary;
        basic_salary= basic_salary+ HRA + DA;
        printf("Gross Salary = %d.00\n",basic_salary);
    }
    else 
    {
        if(basic_salary > 20000){
        HRA= (30.0/100)*basic_salary;
        DA = (95.0/100)*basic_salary;
        basic_salary= basic_salary+ HRA + DA;
        printf("Gross Salary = %d.00\n",basic_salary);
    }
    }
   return 0;
}