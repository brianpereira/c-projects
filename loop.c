/*
   Author: Brian Pereira
   Dated: 15th September, 2020
   Purpose: Looping
*/

#include <stdio.h>
void main()
{
  int x;
  printf("Program to display numbers 1 to 100.\n");
  for(x = 0; x < 101; x = x + 2)
  {
    printf("%d\t",x);
  }
}