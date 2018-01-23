#include<stdio.h>



int main()

{
    int age = 25;
    int grade = 303;
    double result;

    // We need to cast the int to doubles
    result = (double)grade/(double)age;
    printf("result = %lf\n", result);

    // print double as an int
    printf("result = %d\n", (int)result);
    
    return 0; 
}
