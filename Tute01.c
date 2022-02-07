/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and printgg the average of the two marks. */
//IT21469046
//Nipuna Heshan 
#include <stdio.h>

int main() {

  int mark1, mark2 ;
  float total=0 ,average=0;
  
  printf("Enter mark1 :");
  scanf("%d" ,&mark1);

  printf("Enter mark2 :");
  scanf("%d" ,&mark2);

  total= mark1 + mark2;
  average = total/2;

  printf("AVG = %.2f" ,average);


  
  return 0;
}

