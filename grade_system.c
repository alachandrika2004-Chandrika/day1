/*Name: A.Chandrika
  Date: 01/03/26
  Description : finding the grades of a student based on his marks
  sample input : marks = 90
  sample output : 'A'*/

#include <stdio.h>
int main()
{
    //declaring variable for marks
    int marks;
    //reading input from the user
    printf("Enter the marks: ");
    scanf("%d",&marks);

    //grading system 
    switch(marks)
    {
        case 0 ... 35:
                            printf("Fail\n");
                            break;
        case 36 ... 50: 
                            printf("Your grade : C\n");
                            break;
        case  51 ... 89: 
                            printf("Your grade : B\n");
                            break;
        case  90 ... 100: 
                            printf("Your grade : A\n");
                            break;
        default:
                            printf("marks should be in range of 0 to 100\n");
        
    }


    return 0;
}
