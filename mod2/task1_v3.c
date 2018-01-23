#include <stdio.h>

int main()
{
	// Take two integers from the user
	int myInt1;
	int myInt2;
	printf("Enter two integers\n");
	scanf("%d %d",&myInt1, &myInt2);

	// Display their sum
	printf("The sum of %d and %d is %d\n", myInt1, myInt2, myInt1 + myInt2);

	// Display the difference
	printf("The diff  of %d and %d is %d\n", myInt1, myInt2, myInt1 -  myInt2);

	// Disply the product

	printf("The product of %d and %d is %d\n", myInt1, myInt2, myInt1 *  myInt2);

	// the division will give you the quotient

	printf("The divison of %d and %d is %d\n", myInt1, myInt2, myInt1 /  myInt2);

	// Get the remainder with modulus %
	printf("The modulus of %d and %d is %d\n", myInt1, myInt2, myInt1 %  myInt2);

return 0;


}
