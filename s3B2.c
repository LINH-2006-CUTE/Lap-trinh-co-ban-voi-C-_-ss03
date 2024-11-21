#include <stdio.h>
 int main (){
 	float celsius,fahrenheit;
	 printf(" Nhap nhiet do theo do celsius:");
	 scanf("%f\n", &celsius);
	 fahrenheit = celsius * 1.8 + 32;
	 printf("Do fahrenheit la: %.2f\n",fahrenheit);
	 
	 return 0; 
 } 
