#include <stdio.h>
 
//function declaration 
int max(int num1, int num2);

// Driver code 
int main () {

   // local variable definition 
   int a = 1;
   int b = 2;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;

} // End driver
 
// function returning the max between two numbers 
int max(int num1, int num2) {

   //local variable declaration 
   int result;
 
   if (num1 > num2) {
   
      result = num1;
   
   } else {
   
      result = num2;
      
	}
 
   return result; 

} // End Function max

