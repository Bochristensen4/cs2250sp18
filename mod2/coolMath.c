#include<stdio.h>
#include<math.h> // gives sqrt(), pow(), fabs()

int main()
{

// calculate triangles sides

double sideA = 4.0;
double sideB = 5.0;
double sideC;
sideC = sqrt((sideA * sideA) + (sideB * sideB));
printf("sideA %lf, sideB %lf, sideC %lf\n", sideA, sideB, sideC);
// Use pow(base, expontent)
sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
printf("sideA %lf, sideB %lf, sideC %lf\n", sideA, sideB, sideC);

double a = -99.0;
printf(" The abs of %lf is %lf\n", a, fabs(a));


    return 0;
}
