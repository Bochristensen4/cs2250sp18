#include<stdio.h>

// constant
    const double gravity = 9.8; // m/s
    const double LB_TO_KG = 0.453592;
// Function Prototypes


// Main Function

int main()
{
    double weight = 2.4; 
    const double gravity = 9.8; // m/s
    printf("My w is %lf\n", weight);
    printf("Enter your weight\n");
    scanf("%lf", &weight);
    printf("My w is %lf\n", weight);
    // gravity
    printf("Your real weight is %lf\n", weight * LB_TO_KG);
    printf("Your real weight is %lf\n", weight * LB_TO_KG * gravity);


    return 0;
}
