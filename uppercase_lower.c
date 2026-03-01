/*Name: A.Chandrika
  Date: 01/03/26
  Description: check whether the character is uppercase or lowercase
  sample input: c
  sample output : lowercase*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf(" %c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase character \n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase character \n");
    }
    else
    {
        printf("Invalid character\n");
    }
}