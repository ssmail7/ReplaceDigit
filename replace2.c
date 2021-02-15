//*******************************************************************
// Written by Steven Smail for COP3514
//
// replace2.c (Project 5)
//
// This program accepts a user-created number and replaces each digit
// by the sum of that digit plus 6 modulus 10. The program then swaps
// the first digit with the last digit before it displays the output.
//*******************************************************************

#include <stdio.h>

//Function Declarations
void replace(int *a, int *b, int n);
void swap(int *p, int *q);

int main(void)
{
  int n;
  int *p;

  printf("Enter the number of digits of the number:\n");
  scanf("%d", &n);

  int array1[n];
  int array2[n];

  printf("Enter the number:\n");
  for(p = array1; p < array1 + n; p++)
    scanf("%1d", p);

  //Function Calls
  replace(array1, array2, n);
  swap(array2, array2 + n - 1);

  //Displays Output
  printf("Output: ");
  for(p = array2; p < array2 + n; p++)
    printf("%d", *p);
  printf("\n");

  return 0;
}

//Replace Function Definition
void replace(int *a, int *b, int n)
{
  int *p;
  for(p = a; p < a + n; p++)
    *b++ = (*p + 6) % 10;
}

//Swap Function Definition
void swap(int *p, int *q)
{
  int n = 0;
  int *temp = &n;
  *temp = *p;
  *p = *q;
  *q = *temp;
}