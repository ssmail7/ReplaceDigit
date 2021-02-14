//**********************************************************
// Written by Steven Smail for COP3514
//
// replace.c (Project 1)
//
// This program asks the user to enter a three-digit integer
// and then replaces each digit by the sum of that digit
// plus 6 modulus 10.
//**********************************************************

#include <stdio.h>

int main(void)
{
  int number, num_100, num_10, num_1;

  printf("Enter a three-digit number: \n");
  scanf("%d", &number);

  if (100 <= number && number <= 999)
  {
    //Obtaining & changing the first digit
    num_100 = (number/100);
    number -= (num_100 * 100);
    num_100 = (num_100 + 6) % 10;

    //Obtaining & changing the second digit
    num_10 = (number/10);
    number -= (num_10 * 10);
    num_10 = (num_10 + 6) % 10;

    //Obtaining & changing the third digit
    num_1 = number;
    num_1 = (num_1 + 6) % 10;

    //Obtaining the new total from each changed digit
    number = (num_100 * 100) + (num_10 * 10) + num_1;
    printf("Output: %d\n", number);
  }
  else
  {
    printf("Output: Invalid input, the number must be between 100 and 999\n");
  }

  return 0;
}