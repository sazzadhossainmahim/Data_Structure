
// C program to check alphabets using Conditional operator


#include<stdio.h>

int main ()
{
    char ch;
    printf("Enter Any Charecter:");
    scanf("%c",&ch);

    (ch='a' && ch<='z') || (ch>='A' && ch<='Z')
    ? printf("It is Alphabet")
    :printf("It is not Alphabet");
    return 0;
    // এই দিন দিন নয়, আরো দিন আছে , এই দিনেরে নিবে তোমরা সেই দিনেরো কাছে.. 
}