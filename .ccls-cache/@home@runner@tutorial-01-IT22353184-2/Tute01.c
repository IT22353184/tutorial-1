/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1 = 0;
  int mark2 = 0;
  float average = 0;

  printf("input mark1:");
  scanf("%d", &mark1);
  printf("input mark2:");
  scanf("%d", &mark2);

  average = (float)(mark1 + mark2) / 2;

  printf("average:%.2f", average);

  return 0;
}

