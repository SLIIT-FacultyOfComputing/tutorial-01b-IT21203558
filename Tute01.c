/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   	int mark1,mark2;
	
	printf("Enter mark of Subject 1 : ");
	scanf("%d", &mark1);
	
	printf("Enter mark of Subject 2 : ");
	scanf("%d", &mark2);
	
	float average=(float)(mark1+mark2)/2;

	
	printf("Average= %0.3f", average);
  
  return 0;
}

