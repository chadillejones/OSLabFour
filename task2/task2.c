#include <stdio.h>
#include <stdlib.h>

//Collaboration with David Daniels

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int mult (int a, int b);
int divide (int a, int b);
int exitProg (int a, int b);

/* Array of function pointers */
int (*operations[5]) (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int num1, num2, result, operationType;
	operations[0] = add;
	operations[1] = subtract;
	operations[2] = mult;
	operations[3] = divide;
	operations[4] = exitProg;
	while(1>0) {
	printf ("Please enter the first number to perform operations on\n");
  scanf("%d", &num1); 
	printf ("Please enter the second number to perform operations on\n");
  scanf("%d", &num2);
  printf ("Please select the operation you would like to use.\n‘0’ - add\n‘1’ - subtract\n‘2’ - multiply\n‘3’ - divide\n‘4’ - exit program\n");
  scanf("%d", &operationType);

	result = (*operations[operationType])(num1, num2);
	printf("Here is the result %d\n", result);
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int mult (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int exitProg (int a, int b) { printf ("Exiting the program\n"); exit(0); }