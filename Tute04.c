/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int min (int num1 , int num2);
int max (int num1 , int num2);
int multi(int num1 , int num2);


int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", min(no1, no2));
   printf("%d ", max(no1, no2));
   printf("%d ", multi(no1, no2));
   return 0;
}

int min (int num1 , int num2){
   
   return (num1 > num2 ) ? num1 : num2;
}
int max (int num1 , int num2){

  return (num1 < num2 ) ? num1 : num2;
}
int multi(int num1 , int num2){

  return num1 + num2;
}