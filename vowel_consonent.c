/*Name: A.Chandrika'
  Date: 01/03/26
  description: check whether the character is vowel or consonent
  sample input: a
  sample output: vowel*/

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf(" %c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            printf("Vowel character it is\n");
        }
    else
    {
        printf("Consonent character it is\n");
    }

    return 0;
}