#include <stdio.h>
#include "lib_brian.h" // Include custom library

int main()
{
  int x = 90;
  int y = 20;
  int sum = add(x, y); // Call the 'add' function to calculate the sum.
  int diff = subtract(x, y); // Call the 'subtract' function to calculate the difference.

  printf("The sum of %d and %d is: %d\n", x, y, sum);
  printf("%d minus %d equals: %d\n", x, y, diff);
  return 0;
}

