/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  take two doubles from user.
 *                  define the following functions
 *                  1) TheSum: return the (int) sum
 *                  2) TheProd: return the (double product
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:31:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
char Menu (void);
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);

// Main Function
int main()
{
    char input;
    double n1;
    double n2;
    // get user input
    printf("Please provide 1st number\n");
    scanf("%lf", &n1);
    printf("Please provide 2nd number\n");
    scanf("%lf", &n2);

    input = Menu();
    switch(input)
    {
    // 2) call TheSum
    case 's':
        printf("the sum of %lf and %lf is %d\n", n1, n2, TheSum(n1, n2));
        break;
    // 3) call TheProd
    case 'p':
        printf("the product of %lf and %lf is %lf\n", n1, n2, TheProd(n1, n2));
        break;
    }
    return 0;
}
// Function Definitions
// func display sum
int TheSum(double n1, double n2)
{
    // return int of sum
    // use casting (int)
    return (int) (n1 + n2);
}
// func display prod
double TheProd(double n1, double n2)
{
    // return int of sum
    // use casting (int)
    return (n1 * n2);
}
// func menu
char Menu (void)
{
    char in = 'n';
    printf("what do you want to do?\n");
    printf("\t s) TheSum\n");
    printf("\t p) TheProd\n");
    scanf(" %c", &in);
    return in;
}





