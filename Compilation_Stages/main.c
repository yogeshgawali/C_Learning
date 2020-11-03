#include<stdio.h>
#include "sum.h"
#include "difference.h"
#include "multiplication.h"

int main()
{
    int result, a, b;
    printf("Enter a,b:");
    scanf("%d %d", &a, &b);
    printf("Addition of %d and %d is %d", a, b, sum(a, b));
    printf("Multiplication of %d and %d is %d", a, b, multiplication(a, b));
    printf("Difference of %d and %d is %d", a, b, difference(a, b));
    return 0;
}
