/*
   Author: Brian Pereira
   Dated: 15th September, 2020
   Purpose: Conditions
*/


#include <stdio.h>
void main()
{
  int x;
  printf("Program to display numbers 1 to 100.\n");
  for(x = 0; x < 101; x = x + 1)
  {
    if(x < 51)
    {
      printf("\t%d",x);
    }
    else
    {
      break;
    }
  }
}