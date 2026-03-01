/*Name : A.Chandrika
  Date : 01/03/26
  Description : find day of week using switch case
  sample input: 1
  sample output : Monday*/

#include <stdio.h>
int main()
{
    //declaring the days
    int day;
    //read input from the user
    printf("Enter the day : ");
    scanf("%d", &day);

    //using switch to find the day 
    switch(day)
    {
        case 1:
               printf("Monday\n");
               break;
        case 2: 
               printf("Tuesday\n");
               break;
        case 3:
               printf("Wednesday\n");
               break;
        case 4:
               printf("Thursday\n");
               break;
        case 5: 
               printf("Friday\n");
               break;
        case 6:
               printf("Saturday\n");
               break;
        case 7:
               printf("Sunday\n");
               break;
        default:
               printf("Invalid day\n");
    }
    return 0;
}