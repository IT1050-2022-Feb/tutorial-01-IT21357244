/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float subject01Mark;
  float subject02Mark;
  float average;

  printf( "Enter subject 01 mark :" );
  scanf( "%f", &subject01Mark );
  printf( "Enter subject 02 mark :" );
  scanf( "%f", &subject02Mark );

  average = (float)( subject01Mark + subject02Mark ) / 2 ;

  printf( "Average : %.2f", average );
  
  return 0;
}

